/***********************************************
* logical.c: Write and predict logical results *
* Input: None. Output: integer values          *
* Author: Marcus Birkenkrahe GPLv3             *
* Date: 02/24/2025                             *
***********************************************/
#include <stdio.h>

int main(void)
{
  // variable declarations
  int i, j, k;

  // TRANSLATE THE SENTENCE IN THE COMMENT INTO A LOGICAL EXPRESSION
  // AND PUT THE CODE WHERE THE ... ARE. GUESS THE VALUE OF THE
  // LOGICAL EXPRESSION AND REPLACE THE ? WITH IT.
  // EXAMPLE: Check if i is smaller than j => `i < j`
  // FOR i = 10 and j = 5: 10 < 5 is TRUE: ? => 1

  // Check if `(NOT i)` is smaller than j
  i = 10, j = 5;
  printf("%d = %d\n", ..., ?);

  // Check the value of `NOT(NOT (i)) + NOT(j)`
  i = 2, j = 1;
  printf("%d = %d\n", ..., ?);

  // Check if this is true: `NOT(x + y) = NOT(x) + NOT(y)`
  i = 2, j = 1;
  printf("%d = %d\n", ..., ?);

  // Compute `i AND j OR k`
  i = 5, j = 0, k = -5;
  printf("%d = %d\n", ..., ?);

  // Compute `i smaller than j OR k`
  i = 1, j = 2, k = 3;
  printf("%d = %d\n", ..., ?);

  return 0;
}
