#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *Description: print the vaule of n status:
 *greater than, is zero and is not less than 6.
 *Return: Always 0 (success)
 */
int main(void)
{
int n, digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
digit = n % 10; /*gets the digit value*/
if (digit > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, digit);
else if (digit == 0)
printf("Last digit of %d is %d and is 0\n", n, digit);
else if (digit < 6 && digit != 0)
printf("Last digit of %d is %d and is less than 66 and not 0\n", n, digit);
return (0);
}
