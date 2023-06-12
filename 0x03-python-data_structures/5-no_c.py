#!/usr/bin/env python3
def no_c(my_string):
    if my_string:
        new_string = "".join(i for i in my_string if i.lower() != "c")
    return new_string
