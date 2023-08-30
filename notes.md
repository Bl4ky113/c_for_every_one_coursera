# C for Everyone
## On Coursera
## By Ira Pohi from the University of California

Start: 08/22/2023

Sessions:
- 08/22/2023

## History of C

Created on 1972 by Dennis Ritchie. It's purpose was creating a operating system called unix.
It was released as free software, free as in freedom. 

It was also developed for small and 'micro' computers of that era. 
Which normally where big and very pricy computers.

It powers Linux and the bases of MacOs.

## compiler

We need to compile everything before using it. We can use gcc, and just pass the file name as a 
parameter, but if we want a nice output file and not a.out we can add a -o flag and pass the output name/path

Without a good syntax. This includes getting right the keywords, closing brakets, defining and including libraries if needed,
end all of the lines with a ;. And stuff like that. If we miss any of these syntax errors, the program isn't going to compile.
Each of these little things are known for the compiler as tokens, which are going to be evaluated before compiling.

There's some special stuff that isn't a keyword itself but it could be important when compiling the program such as the main
function, which is going to be executed first when running the program.

### comments

Comments are a type of token which is going to be ignored by the compiler. But it's important for stuff like 
documentation, information of the program and general comments of how the code works.

Their syntax are the general c comment
single line
multiple lines

### keywords

Are special type of words which we CAN'T use in the program by themselfs. Generally they are used for datatypes and 
code structures. But there are some 'kaywords' that are important but not that restrictive of using them like main functions,
include without the #, and others.

### identifiers

Identifiers are the ways to indentify, use and call some variables, functions and other stuff. Generally letters are acepted. 
But numbers in the begining of the identifier are not allowed, but everywhere else is ok.
Some symbols like - / # % and others are not allowed, but others are like \_.

It's important to set a good identifier that makes sense so we don't have identifiers that are a mystery to everyone but the
programer that defined that identifier. 

It's both valid snake_case and cammelCase on C.

## \#define

It's a way to create a constant value, such like PI, we just define the variable name, and then
the compiler will fill the constant value on each place that we used that name.

Saving us memory.

## stdio.h

Standard input output library let us do printf and scanf
