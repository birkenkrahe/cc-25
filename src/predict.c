/****************************************
* predict.c: Predict arithmetic results *
* Input: None. Output: integer values   *
* Author: Marcus Birkenkrahe GPLv3      *
* Date: 02/22/2025                      *
****************************************/
#include <stdio.h>

int main() {
  int a = 5, b = 10, c;

  c = a + b * 2;
  printf("1. c = %d ? %d\n", c, XX); // replace XX by your guess

  c = (a + b) * 2;
  printf("2. c = %d ? %d\n", c, XX);

  c = b / a + 3;
  printf("3. c = %d ? %d\n", c, XX);

  c = ++a + b--;
  printf("4. a = %d ? %d, b = %d ? %d, c = %d ? %d\n", 
         a, XX, b, XX, c, XX);

  return 0;
}
