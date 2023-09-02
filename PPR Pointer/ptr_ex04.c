#include <stdio.h>

int main()
{
	int i;
	int *ptr_i;
	int num[] = {12, 3, 45, 678, 90};
	char *ptr_c;
	char name[] = "My name is Array!";

	ptr_i = num;
	for (i = 0; i < 5; i++) {
		printf("%d ", ptr_i[i]);
	}
	printf("\n");

	ptr_c = name;
	for (i = 0; ptr_c[i] != '\0'; i++) {
		printf("%c ", ptr_c[i]);
	}
	printf("\n");

	return 0;
}

