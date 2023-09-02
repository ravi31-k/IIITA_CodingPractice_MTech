#include <stdio.h>

int main()
{
	int a[2][4];
	int (*p1)[4];
	int **p2;

	a[1][2] = 41572;
	p1 = a;
	p2 = a;

	printf("a[1][2] = %d\n", a[1][2]);

	printf("*(*(a + 1) + 2)) = %d\n", *(*(a + 1) + 2));
	printf("*(*(p1 + 1) + 2)) = %d\n", *(*(p1 + 1) + 2));
	printf("*(*(p2 + 1) + 2)) = %d\n", *(*(p2 + 1) + 2));

	return 0;
}

