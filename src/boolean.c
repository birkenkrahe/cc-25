/****************************************
* boolean.c: Predict logical results    *
* Input: None. Output: integer values   *
* Author: Marcus Birkenkrahe GPLv3      *
* Date: 02/22/2025                      *
****************************************/
#include <stdio.h>

int main() {
    int x = 1, y = 0, z = 5;

    // Below, replace `?` by what you expect the Boolean expression
    // result in - for example for the first statement, compute (in
    // your head) `1 && 0` (which is 1 AND 0 in the truth table, and
    // replace `?` by what you think the result will be.
    // EXAMPLE: x && x = 1 && 1 = TRUE = 1
    // printf("%d == %d\n", x && y, 1);
    
    printf("%d == %d\n", x && y, ?);
    printf("%d == %d\n", x || y, ?);
    printf("%d == %d\n", x == y, ?);
    printf("%d == %d\n", !x, ?);
    printf("%d == %d\n", z > x && y < z, ?);

    return 0;
}
