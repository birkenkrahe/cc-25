/****************************************
* predict.c: Predict arithmetic results *
* Input: None. Output: integer values   *
* Author: Marcus Birkenkrahe GPLv3      *
* Date: 02/22/2025                      *
****************************************/
#include <stdio.h>                                                   
                                                                     
int main() {                                                         
  int a = 5, b = 10, c;                                              

  // USING THE VALUES FOR a AND b, COMPUTE c IN YOUR HEAD
  // THEN ENTER THE VALUE INSTEAD OF THE QUESTION MARK ?
  // THEN COMPILE AND RUN TO SEE IF YOU GUESSED RIGHT.
  // EXAMPLE: c = b * a = 10 * 5:
  // printf("1. c = %d == %d\n", c, 50); 
  
  c = a + b * 2;                                                     
  printf("1. c = %d == %d\n", c, ?); 
                                                                     
  c = (a + b) * 2;                                                   
  printf("2. c = %d == %d\n", c, ?);                                 
                                                                     
  c = b / a + 3;                                                     
  printf("3. c = %d == %d\n", c, ?);                                 
                                                                     
  c = ++a + b--;                                                     
  printf("4. a = %d == %d, b = %d == %d, c = %d == %d\n",            
         a, ?, b, ?, c, ?);                                          
                                                                     
  return 0;                                                          
}                                                                    
