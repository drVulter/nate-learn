/*
A simple program to show the basic outline of a C program
This text will all be ignored by the compiler.
 */

// Comments can also be on a single line

/*
This tells the computer that you will be using some predefined functions from a "header file"
called stdio.h, more on header files later
 */
#include <stdio.h>

// This is where the magic happens, function called main, returns an integer, int, takes no arguments (void)
// The commands in this function drive the rest of your program.
int main(void)
{
    printf("Hello world!\n"); // printf() displays output to standard output, i.e. terminal
    // was defined in stdio.h

    // we are finished so we return a value of 0 to tell the operating system that we are finished
    return 0;
}
