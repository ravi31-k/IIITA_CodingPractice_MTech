#include <stdio.h>

int main()
{
	int *ptr;
	int a1[1];
	int a2[2];
	int a3[1024];

	printf("sizeof int *= %lu\n", sizeof(int *));
	printf("sizeof ptr  = %lu\n\n", sizeof ptr);

	printf("sizeof a1[] = %lu\n", sizeof(a1));
	printf("sizeof a2[] = %lu\n", sizeof(a2));
	printf("sizeof a3[] = %lu\n", sizeof(a3));

	return 0;
}

