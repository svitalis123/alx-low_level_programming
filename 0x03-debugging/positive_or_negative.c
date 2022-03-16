#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void positive_or_negative(int i)
{
srand(time(0));
/* your code goes there */
if (i > 0)
{
	printf("%d is positive\n", i);
}
if (i < 0)
{
	printf("%d is negative\n", i);
}
if (i == 0)
{
	printf("%d is zero\n", i);
}

}
