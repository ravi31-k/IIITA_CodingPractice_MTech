#include <stdio.h>

int main()
{
	char c = '2';
	int i = 2;
	int *ptr = &i;

	printf("sizeof c    = %lu\n", sizeof c);
	printf("sizeof '2'  = %lu\n", sizeof '2');
	printf("sizeof(int) = %lu\n", sizeof(int));
	printf("sizeof 2    = %lu\n", sizeof 2);
	printf("sizeof 2L   = %lu\n", sizeof 2L);
	printf("sizeof 2.0F = %lu\n", sizeof 2.0F);
	printf("sizeof 2.0  = %lu\n", sizeof 2.0);
	printf("sizeof 2.0L = %lu\n", sizeof 2.0L);
	printf("sizeof ptr  = %lu\n", sizeof ptr);

	return 0;
}

