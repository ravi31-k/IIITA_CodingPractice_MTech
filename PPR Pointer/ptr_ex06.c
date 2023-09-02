#include <stdio.h>

int main()
{
	int i;
	int j;

	const int *cp;		   /* cannot change value pointed to */
	int *const pc = &i;	   /* cannot change address assigned */
	const int *const pcp = &i; /* both the above */

	i = 20;

	cp = &i;	// allowed
	// *cp = 10;	// cannot change the value pointed to
	printf("i = %d\n", i);

	// pc = &j	// cannot change the address assigned
	*pc = 30;	// allowed
	printf("i = %d\n", i);

	// pcp = &j;	// cannot change the address assigned
	// *pcp = 30;	// cannot change the value pointed to
	printf("i = %d\n", i);

	return 0;
}

