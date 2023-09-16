# C for Everyone
## On Coursera
## By Ira Pohi from the University of California

Start: 08/22/2023

Sessions:
- 08/22/2023
- 09/13/2023
- 09/16/2023

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

## Primary Expresion Operators

- () function call
- [] indexing
- foo++ increment
- foo-- decrement

## Unary Operators

- * star
- & address
- + unary plus
- - unary minus
- ! logical negation
- ++foo prefix autoincrement
- --foo prefix autodecrement
- (typescast)
- sizeof it's an expresion

## Binary Operators

- * multiplication
- / division
- % module
- + addition
- - subtraction
- "\>" "\>=" greater (equal) than  
- "\<\>" "\<=\>" less (equal) than 
- == equal
- != not equal
- & bit wise and
- ^ bit wise operation
- | bit shift
- && logical and 
- || logical or

## Ternary Operator

short hand for if

condition ? do_code : else_code

## Assignment Operators

- = asign
- += plus assign
- -= minus assign
- *= multiply assign
- /= divide assign
- %= module assign

## C Types

- char: 
a text character. Generally a ASCII character which is stored as an number internally, 
so it can be used as such. We can declare one with single quotes or its ascii value.

Little remainder that there's more characters than the alpabet, like \0, \n, \r, \t
and others.

It's char formating value is %c

- int: 
integers. Generaly stored in 4bytes.
Can be modified with long and short to modify its size.

unsigned is used when we are not using negative values. 

It's formating value can change if it's long, short or it could even be represented as a char with %c.
But generaly is %d

- double, float: 
numbers with . notation. Supports cientific notation.
When writing a constant it's important to always include the . notation.
Otherwise C will think that that's an integer.

There could be some imprecision with adding large and small numbers. So we might need to acount for them 
in the long term or if needed.

There's a lot of formating values like %e or %E for cientific or exponent notation
%f for general float, %lf for long floats
%g or %G chooses from %e or %f which has the shortest representation

can be modified by:
- unsigned (float, int): skip the negative bit and use it for more storage memory
- long (float, int, double): Increses the storage of the variable type. You can check it with sizeof

## If, else if and else

The general usage from the C based languages

## while 

The general usage from the C based languages

## while get char

with stdio.h we get the getchar() function, which is like scanf but only scans 1 char at the time.
It can be used to check the contents of a file by using:

./script.out > FILE

Sending the FILE to the script
It just returns the value of the char. Is ASCII, int or whatever you need

## for loop

the general for loop syntax on C based languages

## switch

You can't even guess

## Functions in C

In C the syntax is generaly fine but there are some tricks.

First, the structure of a function is

returnType name (arguments)

from there it could change. Generaly if it stops, with a ;, there it's called signature, 
its common use is in header files. Or what you have to make to use and deploy a
function package in C.
This could also be used in the main code, so we don't have to import or try to define the 
function everywhere that we need it. Doing this is called function prototype.

If you give the function some code to execute, just add {  } and the code inside.
The scope of the function won't affect the values of the parameters passed to it.
Just be careful to add the correct return type of the function in the function itself.
But there's some room to experiment since, for example, if we returned internaly a 
int value but the function said that it was goind to return a float or double value 
C will convert the int function to the value defined to return.
Altough i don't know what would happen if I try to return a string in a float or double 
function.

You can documendate them just like a JSDoc comment.
