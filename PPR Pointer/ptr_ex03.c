#include <stdio.h>

int main()
{
	char *str;
	char name[] = "My name is Array!";

	str = "Hello World";
	printf("str as string constant = %s\n", str);
	printf("str as pointer = %p\n", (void *) str);
	printf("&str = %p\n", (void *) &str);
	printf("\n");

	str = "Little STAR";
	printf("str as string constant = %s\n", str);
	printf("str as pointer = %p\n", (void *) str);
	printf("&str = %p\n", (void *) &str);
	printf("\n");

	str = name;
	printf("str as string constant = %s\n", str);
	printf("str as pointer = %p\n", (void *) str);
	printf("&str = %p\n", (void *) &str);

	return 0;
}

