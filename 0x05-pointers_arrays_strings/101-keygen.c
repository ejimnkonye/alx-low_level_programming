#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - generates random passwords for 101-crackmr
 * Return: zero
 */
int main(void)
{
int num;

srand(time(0));
num = rand();
printf("%i\n", num);
return (0);
}
