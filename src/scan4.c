/******************************************************/
/* scan3.cc: scan integers separated by backward slash
/* Input: 5/6• <br> 3/4
/* Output: "5/6 + 3/4 = 38/24"
/* Author: [name] (pledged)
/* Date: 02/15/2025
/*****************************************************/
#include <stdio.h>

int main() {
// declare variables
int num1, denom1, num2, denom2, result_num, result_denom;

// scan input
scanf("...", &num1, &denom1);
scanf("...", &num2, &denom2);

// compute numerator and denominator
result_num = num1 * denom2 + num2 *denom1;
result_denom = denom1 * denom2;

// print result
printf("%d/%d + %d/%d = %d/%d\n",
       num1, denom1, num2, denom2,
       result_num, result_denom);
return 0;
}
