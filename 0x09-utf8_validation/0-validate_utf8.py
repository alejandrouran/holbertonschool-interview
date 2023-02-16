#!/usr/bin/python3
""" UTF-8 Validation """


def validUTF8(data):
    """method that determines if a 
    given data set represents a 
       valid UTF-8 encoding"""

    if len(data) == 0:
        return True
    if len(data) == 1:
        if  data[0] >= 32 and data[0] <= 126:
            return True
        else:
            return False

    for n in data:
        if n > 31 and n < 127:
            continue
        else:
            return False

    return True
