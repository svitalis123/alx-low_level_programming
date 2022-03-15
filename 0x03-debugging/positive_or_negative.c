#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void positive_or_negative(int n)
{
srand(time(0));
/* your code goes there */
if (n > 0)
{
	printf("%d is positive\n", n);
}
if (n < 0)
{
	printf("%d is negative\n", n);
}
if (n == 0)
{
	printf("%d is zero\n", n);
}

}
