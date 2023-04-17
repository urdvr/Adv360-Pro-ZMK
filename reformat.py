import re


def format_keybinding(keymap):
    keymap = keymap.split("\n")
    keymap = [x.strip() for x in keymap if x.strip() != '']
    keymap = [x.strip().split("&") for x in keymap]
    keymap = [[x for x in y if x != ''] for y in keymap]
    keymap = [[x.strip() for x in y] for y in keymap]
    keymap = [[x.split() for x in y] for y in keymap]

    keymap[0] = keymap[0][:7] + [None] * 8 + keymap[0][7:]
    keymap[1] = keymap[1][:7] + [None] * 8 + keymap[1][7:]
    keymap[2] = keymap[2][:7] + [None] + keymap[2][7:]
    keymap[2] = keymap[2][:14] + [None] + keymap[2][14:]
    keymap[3] = keymap[3][:6] + [None] + keymap[3][6:]
    keymap[3] = keymap[3][:15] + [None] + keymap[3][15:]
    keymap[4] = keymap[4][:5] + [None] * 2 + keymap[4][5:]
    keymap[4] = keymap[4][:10] + [None] * 2 + keymap[4][10:]
    keymap[4] = keymap[4][:15] + [None] * 2 + keymap[4][15:]

    assert len(set([len(x) for x in keymap])) == 1

    num_cols = len(keymap[0])
    col_widths = [0] * num_cols

    for row in keymap:
        for col in range(len(row)):
            if row[col] is not None:
                if sum([len(i) for i in row[col]]) + len(row[col]) > col_widths[col]:
                    col_widths[col] = sum([len(i) for i in row[col]]) + len(row[col]) + 1

    formatted_keymap = ""
    for row in keymap:
        for col in range(len(row)):
            if row[col] is not None:
                formatted_keymap += '&' + ' '.join(row[col]).ljust(col_widths[col])
            else:
                formatted_keymap += ' ' * (col_widths[col] + 1)
        formatted_keymap += '\n'

    return formatted_keymap.rstrip()


def format_keybinding_regions(input_string):
    start_pattern = r'bindings = <'
    end_pattern = r'>;'

    start_indices = [m.start() for m in re.finditer(start_pattern, input_string)]
    end_indices = [m.start() for m in re.finditer(end_pattern, input_string)]

    if not start_indices or not end_indices:
        return input_string

    # Discard all end tokens smaller than the smallest start token
    end_indices = [end for end in end_indices if end > start_indices[0]]

    formatted_string = ''
    current_position = 0
    start_end_pairs = list(zip(start_indices, end_indices))

    for start, end in start_end_pairs:
        if end - start < 100:
            continue
        formatted_string += input_string[current_position:start + len(start_pattern)]
        keybinding = input_string[start + len(start_pattern):end].strip()
        formatted_keybinding = format_keybinding(keybinding).strip()
        formatted_string += '\n' + formatted_keybinding + '\n      '
        current_position = end

    formatted_string += input_string[current_position:]
    return formatted_string


formatted = (format_keybinding_regions(open('/home/uku/Adv360-Pro-ZMK/config/adv360.keymap').read()))
with open('/home/uku/Adv360-Pro-ZMK/config/adv360.keymap', 'w') as f:
    f.write(formatted)
