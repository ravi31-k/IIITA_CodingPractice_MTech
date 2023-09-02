#include <stdio.h>

int main()
{
	int i;
	int *ptr;

	ptr = &i;

	i = 10;
	printf("i = %d; &i = %p; *p = %d, p = %p; &p = %p\n",
		i, &i, *ptr, ptr, &ptr);

	*ptr = 20;
	printf("i = %d; &i = %p; *p = %d, p = %p; &p = %p\n",
		i, &i, *ptr, ptr, &ptr);

	return 0;
}

