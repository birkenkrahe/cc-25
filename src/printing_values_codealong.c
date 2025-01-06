/*****************************************/
/* printing_values_codealong.c:          */
/* Codealong for 2_printing_values.org   */
/* Author: Marcus Birkenkrahe (GPLv3)    */
/* Date: 1/5/2025                        */
/*****************************************/
#include <stdio.h>
#include "whitespace.h"
#include <math.h>

int main()
{
  // Printing requires format
    printf("Hello\n"); // a string
    printf("Hello, ", "world!\n"); // two strings
    printf("%s %s\n\n", "Hello,","world!"); // with format
    
    // Printing over multiple lines
    printf("Hello,\n");
    printf("world!\n");
    printf("Hello,\nworld!\n\n");
    
    // Whitespace is (mostly) ignored
    whitespace(); // this function is defined in "whitespace.h"
    
    // Values
    printf("\n\nInteger number: %i\n", 1);
    printf("Floating-point number: %f\n", 1.0);
    printf("Character: %c\n", '1');
    
    // Everything is a number
    printf("\nCharacter '1' as number: %i\n", '1'); 
    printf("%i + %i = %i\n", 1,1,1+1);
    printf("%.19 / %.19f = %.19f\n", exp(1), M_PI, 1E+9/M_PI);      
}

