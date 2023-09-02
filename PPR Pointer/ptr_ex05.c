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
		printf("%d ", *ptr_i);
		ptr_i++;
	}
	printf("\n");

	ptr_c = name;
	while ((*ptr_c) != '\0') {
		printf("%c ", *ptr_c);
		ptr_c = ptr_c + 1;
	}
	printf("\n");

	return 0;
}

