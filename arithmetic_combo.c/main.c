#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the arithmetic combination of operators.
*
* Return: 0
*/
int main()
{
/* declare variables */
int x, y, z;

/* initialize variables */
x = 10;
y = 5;
z = 2;

/* arithmetic combinations */
x += y;
/* test statement */
printf("x: %d\n", x);

x = 10; /* reset x */
x -= y;
printf("x: %d\n", x);

x = 10; /* reset x */
x /= y;
printf("x: %d\n", x);

x = 10; /* reset x */
x %= y;
printf("x: %d\n", x);

x = 10; /* reset x */
z = z * x + y;
printf("z: %d\n", z);

z = 2; /* reset z */
z *= x + y;
printf("z: %d\n", z);

return (0);
}
