11/19/2023

Type conversions happen automatically when we use an object of one type where an object of another type is expected - page 92

This is especially important for unsigned -> signed

Page 111 - "
The distinction between a declaration and a definition may seem obscure at this point but is actually important. To use a variable in more than one file requires declarations that are separate from the variable’s definition. To use the same variable in multiple files, we must define that variable in one—and only one—file. Other files that use that variable must declare—but not define—that variable."

test.h
-----

int jimmy = 50; define and declare a variable 

-----

main.cpp
-----
#include "test.h"

extern int jimmy;
-----