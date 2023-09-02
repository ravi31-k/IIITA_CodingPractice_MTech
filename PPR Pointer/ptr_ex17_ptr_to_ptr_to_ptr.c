#include <stdio.h>

#define VP (void *)

int main()
{
	int i;
	int *p;
	int **pp;
	int ***ppp;

	i = 20;
	p = &i;
	pp = &p;
	ppp = &pp;

	printf("i = %d\n", i);
	printf("p = %p; *p = %d\n", VP p, i);
	printf("pp = %p; *pp = %p; **pp = %d\n", VP pp, VP p, i);
	printf("ppp = %p; *ppp = %p; **ppp = %p; ***ppp = %d\n", VP ppp, VP 
	pp, VP p, i);
	

	return 0;
}

