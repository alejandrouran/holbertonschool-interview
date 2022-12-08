#!/usr/bin/python3
"""method that determines if all the boxes can be opened."""

def canUnlockAll(boxes):
    box_list = [0]
    for key in box_list:
        for key_box in boxes[key]:
            if key_box not in box_list:
                if key_box < len(boxes):
                    box_list.append(key_box)
    if len(box_list) == len(boxes):
        return True
    return False