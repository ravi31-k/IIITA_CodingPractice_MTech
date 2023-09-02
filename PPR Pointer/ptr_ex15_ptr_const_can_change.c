#include <stdio.h>

int main()
{
	const int i = 10;
	const int j = 10;
	int *p;

	printf("i = %d; j = %d\n", i, j);

	p = (int *) &i;
	*p = 25;
	printf("i = %d; j = %d\n", i, j);

	p = (int *) &j;
	*p = 25;
	printf("i = %d; j = %d\n", i, j);

	return 0;
}

