#!/usr/bin/python3
import re

NBROWS = 3
NBCOLS = 12
VERBOSE = True

def num2chr(num) -> str:
    if num < 10:
        return str(num)
    else:
        return chr(ord('a') + num -10)

def generate_defines():
    layers = [0,1,2,3]
    nbrows = NBROWS
    nbcols = NBCOLS
    output_file = 'keypos.txt'
    f = open(output_file, 'w')
    for layer in layers:
        for row in range(nbrows):
            for col in range(nbcols):
                name = f'k{layer}{row}{num2chr(col)}'
                original = f'keymaps[{layer}][{row}][{col}]'
                f.write(f'#define {name} {original}\n')
    f.close()

def parse_keymap() -> list:
    """read 'my_keymap.h' and parse it so as to generate my 'keypos_aliases.h'
    my_keymap.h is generated from the json2c qmk command, called just before this program
    """
    output_file = 'my_keypos_aliases.h'

    f = open('my_keymap.h')
    text = '\n'.join(f.readlines())
    f.close()
    tokstart = 'LAYOUT('
    tokend   = '),'
    result = re.search(f'{tokstart}(.*){tokend}', text)
    matches = re.findall(f'{tokstart}(.*){tokend}', text)
    # print([m for m in matches])

    # get a list of strings. Each element of that list is the contents of an entire layer as a single string. It will be sliced into key-wise elements later on
    
    layers_str = [m[0].strip('()') for m in matches]

    # dirty fix for the first element of each 'layer' list:
    # when raw from processing, the first element starts with '_split_3x6_3(', which is the layout name as filled into one of QMK Configurator's text fields.
    # This is quite undesirable so just remove it if present in each layer's first element
    for layerid,layer_str in enumerate(layers_str):
        # find the position of the first opening parenthesis
        pos = layer_str.find('(')
        if VERBOSE:
            print("correcting for {} at layer {}".format(layer_str[:pos], layerid))
        layers_str[layerid] = layer_str[pos+1:]

    # print('\n---\n'.join(layers_str))

    # TODO: this function is actually broken at this point.
    # You see, it slices the string into individual elements separated
    # by commas (','). However, some keycodes actually contain commas within them,
    # the prime example being the mod-tap layer keys (ex: LT(2, KC_ENT))
    # in order to address this, I would need to either:
    # - parse the string intelligently with a parsing engin
    # - use a second pass on the created elements to combine successive pairs where:
    #   - the first one has an open parenthesis but no closing parenthesis
    #   - the second one has a matching closed parenthesis
    layers = [ls.split(',') for ls in layers_str]
    for i,l in enumerate(layers):
        if not VERBOSE:
            break
        print("LAYER {}: {}".format(i, l))
        print('---\n')

    nbrows = NBROWS
    nbcols = NBCOLS

    f = open(output_file, 'w')

    f.write('#pragma once\n')
    for layerid,layer in enumerate(layers):
        for row in range(nbrows):
            for col in range(nbcols):
                keyid = row * nbcols + col

                # print(f'row={row} col={col} -> keyid={keyid}')
                name = f'k{layerid}{row}{num2chr(col)}'
                mirrorcol = nbcols - col -1
                mirrorname = f'km{layerid}{row}{num2chr(col)}'
                mirrorkeyid = row * nbcols + mirrorcol 
                f.write(f'#define {name} {layers[layerid][keyid]}\n')
                f.write(f'#define {mirrorname} {layers[layerid][mirrorkeyid]}\n')
                # print(f'#define {name} {layers[layerid][keyid]}\n')
        # if layerid == 1:
        #     break
    f.close()
    return

    for m in matches:
        if not VERBOSE:
            break
        print(type(m), len(m), m)
        print('')
        for x in m:
            print('xxx', x)
    return

    if VERBOSE:
        print(result.group())
        print('----')
        print(result.group(1))
        print('----')
        print(result.group(2))


if __name__ == '__main__':
    # generate_defines()
    parse_keymap()

