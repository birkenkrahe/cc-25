/*****************************************/
/* printing_values_codealong.c:          */
/* Codealong for 2_printing_values.org   */
/* Author: Marcus Birkenkrahe (GPLv3)    */
/* Date: 1/5/2025                        */
/*****************************************/
#include <stdio.h>
main()
{
    // Everything is a number
    printf("%i\n", 3.14); // floating-point as integer: undefined behavior
    printf("%c\n", 3.14); // floating-point as character: garbage character
    printf("%f\n", 3); // integer as floating-point: undefined behavior
    printf("%c\n", 3); // integer as character: prints ASCII character
    printf("%i\n",'3'); // character as integer: prints ASCII code
    printf("%f\n",'3'); // character as floating-point: undefined behavior
    
    // Print challenge
    // Print 3.14 - 3 = 0.14 using printf and the values 3.14, 3, and 0.14
    printf("%f - %i = %f\n", 3.14, 3, 0.14);
    printf("%.2f - %i = %.2f\n", 3.14, 3, 0.14);
}
