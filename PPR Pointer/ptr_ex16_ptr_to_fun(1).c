#include <stdio.h>

int adds(int x, int y)
{
	return (x + y);
}

int subs(int x, int y)
{
	return (x - y);
}

int muls(int x, int y)
{
	return (x * y);
}

int main(int argc, char *argv[])
{
	int x;
	int y;
	int (*ptr_to_fun)(int, int);

	x = 20;
	y = 10;

	ptr_to_fun = &adds;
	printf("*ptr_to_fun(%d, %d) = %d\n", x, y, (*ptr_to_fun)(x, y));

	ptr_to_fun = &subs;
	printf("*ptr_to_fun(%d, %d) = %d\n", x, y, (*ptr_to_fun)(x, y));

	ptr_to_fun = &muls;
	printf("*ptr_to_fun(%d, %d) = %d\n", x, y, (*ptr_to_fun)(x, y));

	return 0;
}

