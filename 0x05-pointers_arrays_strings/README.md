0 of the array to be printed
Numbers must be separated by comma, followed by a space
The numbers should be displayed in the same order as they are stored in the array
You are allowed to use printf
9-strcpy.c

Write a function that copies the string pointed to by src, including the
terminating null byte (\0), to the buffer pointed to by dest.
Prototype: char *_strcpy(char *dest, char *src);
Return value: the pointer to dest
100-atoi.c

Great leaders are willing to sacrifice the numbers to save the people.
Poor leaders sacrifice the people to save the numbers
Write a function that convert a string to an integer.
Prototype: int _atoi(char *s);
The number in the string can be preceded by an infinite number of characters
You need to take into account all the - and + signs before the number
If there are no numbers in the string, the function must return 0
You are not allowed to use long
You are not allowed to declare new variables of “type” array
You are not allowed to hard-code special values
Your code needs to work on both ubuntu 14.04 LTS and 16.04 LTS
We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.
If this flag is not available in you version of gcc, you can install the last version on your VM
We will use gcc version 5 or above to compile
101-keygen.c

Don't hate the hacker, hate the code
Create a program that generates random valid passwords for the
program 101-crackme.
You are allowed to use the standard library
You don’t have to pass the betty-style tests
(you still need to pass the betty-doc tests)
man srand, rand, time
gdb and objdump can help