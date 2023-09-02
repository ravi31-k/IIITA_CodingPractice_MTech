#include <stdio.h>

void func(int a[])
{
	int i;

	printf("sizeof a = %lu (func)\n", sizeof(a));

	i = 0;
	while (a[i] != 4) {
		printf("a[%d] = %d\n", i, *a);
		a++;
	}
}

int main()
{
	int a[] = {1, 2, 3, 4, 5, 6}; 
	int *ptr = a;

	printf("sizeof a = %lu (main)\n", sizeof(a));

	func(a);
	func(ptr);

	return 0;
}

