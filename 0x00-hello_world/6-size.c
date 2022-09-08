#include<stdio.h>
/**
*main- is the entry point for program.
*
*Return 0 if no error, Non-0 if errors.
*/
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;
intf("Size of a char: %1u byte(s)\n", (unsigned long)sizeof(d));
intf("Size of an int: %1u byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a char: %1u byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an int: %1u byte(s)\n", (unsigned long)sizeof(a)); 
printf("Size of a long int: %1u byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %1u byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %1u byte(s)\n", (unsigned long)sizeof(f));
return 0;
}
