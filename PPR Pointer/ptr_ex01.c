#include <stdio.h>

int main()
{
	int i;
	int *ptr = NULL;

	i = 10;
	ptr = &i;

	printf("i     = %d\n", i);
	printf("&i    = %p\n", &i);
	printf("\n");

	printf("&ptr  = %p\n", &ptr);
	printf("ptr   = %p\n", ptr);
	printf("*ptr  = %d\n", *ptr);

	return 0;
}

