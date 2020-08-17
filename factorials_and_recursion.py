#!/usr/bin/env python3

#
# Just a fun program to output factorial numbers
#
#

import sys

def recursion_limit(n):
    sys.setrecursionlimit(n)

def factorial(x):
    if x == 1:
        return 1
    else:
        return x * factorial(x - 1)

def format_num(y):
    return "{:,}".format(y)



# And now just for some fun

recursion_limit(10000)
big_num = format_num(factorial(9000))

print(big_num)
