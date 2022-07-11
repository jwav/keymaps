#!/usr/bin/python3

"""
This script generates a my_combos.h file, from simple in-python combo definitions
"""

class Layout:
    """Represents the keyboard layout. Allows key reference by position and layer"""

    #TODO: check that it doesn't mess up the thumb keys order on the Corne?
    def __init__(self, rows_sizes:list, split=True):
        """
        Params:
            rows_sizes: a list of how many keys per row there are. If split, only count what's on one half. thumb row is usually on the bottom
            split: True for split keyboards
        """
        if not split:
            raise NotImplementedError
        pass

        


class Combo:
    """ Container class for a combo. """

    def __init__(self, name:str, action:str, keys:str):
        """
        Params:
            name: 'cb_eacu_base_right'
            action: 'fEACU'
            keys: 'km023 km024'
        """
        self.name = name
        self.action = action
        self.keys = keys.split(" ")
        self.enum_name = self.name.upper()
        self.progmem_name = self.name.lower()
    
    @property
    def keys_commas(self):
        return ", ".join(self.keys)

class ComboList(list):
    def combos_definitions_file_str(self) -> str:
        ret = "#pragma once\n"\
                "enum combo_events {\n"
        for combo in self:
            ret += f"{combo.enum_name},\n"

        ret += "MY_NB_COMBOS\n};\n"
        return ret

    def combos_file_str(self) -> str:

        ret = """
#include "my_french_keycode_aliases.h"
#include "my_keypos_aliases.h"
#include "my_combos_definitions.h"

"""
        # defining the progmems
        for combo in self:
            ret += "const uint16_t PROGMEM {} = {{ {} }};\n".format(
                    combo.progmem_name,
                    combo.keys_commas
                    )
        # defining the key_combos
        ret += "combo_t key_combos[MY_NB_COMBOS]\n"
        for combo in self:
            ret += "[{}] = COMBO_ACTION({}),\n".format(
                    combo.enum_name,
                    combo.progmem_name
                    )
        ret += "};\n"
        
        # defining the process_combo_event
        ret += """
void process_combo_event(uint16_t combo_index, bool pressed) {
switch(combo_index) {
"""
        for combo in self:
            ret += f"case {combo.enum_name}:\n"
            ret += f"    if(pressed) tap_code16({combo.action});\n"
            ret += f"    break;\n"
        ret += "}\n}"

        


        return ret

    def write_combos_definitions_file(self, filename=None):
        if filename is None:
            filename = "my_combos_definitions.h"
        with open(filename, "w") as f:
            f.write(self.combos_definitions_file_str())

    def write_combos_file(self, filename=None):
        if filename is None:
            filename = "my_combos.h"
        with open(filename, "w") as f:
            f.write(self.combos_file_str())


if __name__ == "__main__":
    cblist = ComboList()
    cblist.extend([
        Combo("cb_eacu_base_right", "fEACU", "km023 km024"),
        Combo("cb_egrv_base_right", "fEGRV", "km022 km023"),
        Combo("cb_agrv_base_right", "fAGRV", "km024 km022"),
        Combo("cb_cced_base_right", "fCCED", "km025 km021"),
        Combo("cb_ugrv_base_right", "fUGRV", "km022 km021"),
        ])
    print(cblist.combos_definitions_file_str())
    print(cblist.combos_file_str())





