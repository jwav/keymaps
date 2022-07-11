#!/usr/bin/python3
"""
This script generates a my_combos.h file, from simple in-python combo definitions
"""

from enum import Enum
import traceback as tb



UPPER_AZ = "".join(chr(x) for x in range(ord('A'), ord('Z')+1))
LOWER_AZ = "".join(chr(x) for x in range(ord('a'), ord('z')+1))
GENERATED_FILENAME = "out_combos.h"


class ActionType(Enum):
    """Tells which type of action the combo performs"""
    KEYCODE = 1


class Keycode:
    SIDE_LEFT = 1
    SIDE_RIGHT = 2
    def __init__(self, string:str):
        self.string = string
        self.numbers = [int(c) for c in self.string if c.isnumeric()]

    @property
    def layer(self):
        return self.numbers[0]

    @property
    def row(self):
        return self.numbers[1]

    @property
    def col(self):
        return self.numbers[2]

    @property
    def side(self):
        return Keycode.SIDE_RIGHT if self.string[1] == "m" else Keycode.SIDE_LEFT

    @property
    def numbers_str(self):
        return "".join(str(n) for n in self.numbers)



class Combo:
    """ Container class for a combo. """

    def __init__(self, name:str, action:str, keys:str, action_type=ActionType.KEYCODE):
        """
        Params:
            name: 'cb_eacu_base_right'
            action: 'fEACU' (for now, just the keycode)
            keys: 'km023 km024'
        """
        self.name = name
        self.action = action
        self.action_type = action_type
        self.keys = keys.split(" ")

    @property
    def keycode(self):
        if self.action_type == ActionType.KEYCODE:
            return self.action
        else:
            return None
    
    def auto_enum_name(self, id=0, strip_id=False):
        """strip_id is only used for another parsing function to count occurences of the same comboname"""
        name = self.action.replace("KC_", "")
        name = "".join(c for c in name if c in UPPER_AZ)
        # return f"cb_{name}_{self.layer}"
        if not strip_id:
            return f"cb_{name}_{id}"
        else:
            return f"cb_{name}"


    def auto_progmem_name(self, id=0):
        return self.auto_enum_name().upper()


    @property
    def layer(self):
        try:
            return Keycode(self.keys[0]).layer
        except Exception as ex:
            tb.print_exc()

            return None

    @property
    def row(self):
        raise NotImplementedError

    @property
    def column(self):
        raise NotImplementedError

    @property
    def progmem_name(self):
        return self.name.lower()

    @property
    def enum_name(self):
        return self.name.upper()
    

class ComboList(list):

    def _how_many_prev_eq_names(combo_id:int):
        counter = 0
        for i in range(combo_id):
            if self[i].auto_enum_name(strip_id=True) == self[combo_id].auto_enum_name(strip_id=True)
:
                counter += 1
        return counter

    def _generate_autonames():


    def combos_file_str(self) -> str:
        """
        Generates a string with the follwing blocks:
        - includes
        - enums 
        - progmems
        - key_combos
        - process_combo_event
        """

        # block: includes
        ret =  '#pragma once\n'
        ret += '#include "my_french_keycode_aliases.h"\n'
        ret += '#include "my_keypos_aliases.h"\n' 
        ret += '\n\n'


        # block: enums
        ret += "enum combo_events\n{\n"
        for combo in self:
            ret += f"    {combo.enum_name},\n"
        ret += "    CB_DUMMY,\n" # seems to help with some bugs, don't ask me why
        ret += "    MY_NB_COMBOS\n};\n"
        ret += "uint16_t COMBO_LEN = MY_NB_COMBOS;\n"

        ret += "\n\n"


        # block: progmems
        for combo in self:
            ret += "const uint16_t PROGMEM {} = {{ {} }};\n".format(
                    combo.progmem_name,
                    ", ".join([*combo.keys, "COMBO_END"])
                    )
        ret += "\n\n"


        # block: key_combos
        ret += "combo_t key_combos[MY_NB_COMBOS] = \n{\n"
        for combo in self:
            ret += "    [{}] = COMBO_ACTION({}),\n".format(
                    combo.enum_name,
                    combo.progmem_name
                    )
        ret += "};\n"
        ret += "\n\n"
        
        # NOTE: disabled for now, will reenable when combo actions go beyond simple keycodes

        # block: process_combo_event
        ret += 'void process_combo_event(uint16_t combo_index, bool pressed)\n{\n'
        ret += 'switch(combo_index) {\n'
        for combo in self:
            ret += f"    case {combo.enum_name}:\n"
            ret += f"        if(pressed) tap_code16({combo.action});\n"
            ret += f"        break;\n"
        ret += "    }\n"
        ret += "}\n"
        ret += "\n"

        return ret


    def write_combos_file(self, filename=None):
        if filename is None:
            filename = GENERATED_FILENAME
        with open(filename, "w") as f:
            f.write(self.combos_file_str())


def test():
    print(LOWER_AZ)
    print(UPPER_AZ)
    print(Combo("cb_eacu_base_right", "fEACU", "km023 km024").auto_enum_name())
    print(Combo("cb_eacu_base_right", "fEACU", "km023 km024").auto_enum_name())


if __name__ == "__main__":
    test()
    exit(0)

    cblist = ComboList()
    cblist.extend([
        Combo("cb_eacu_base_right", "fEACU", "km023 km024"),
        Combo("cb_egrv_base_right", "fEGRV", "km022 km023"),
        Combo("cb_agrv_base_right", "fAGRV", "km024 km022"),
        Combo("cb_cced_base_right", "fCCED", "km025 km021"),
        Combo("cb_ugrv_base_right", "fUGRV", "km022 km021"),
        ])
    print(cblist.combos_file_str())
    cblist.write_combos_file(GENERATED_FILENAME)





