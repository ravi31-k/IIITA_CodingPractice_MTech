#include <stdio.h>


void tp(int *arr, int *m, int *n)
{	
	int x;
	int i, j;
	int l = sizeof(x); 
	for (i = 0; i < *m; i++)
		for (j = 0; j < *n; j++)
			printf("%d ", *(arr+ (i*(*n) + j)));	  
}
 
int main()
{
	int i;
	int j;	
	int m;
	int n;
	scanf("%d %d ", &m, &n);
	int a[m][n];
	for (i = 0; i < m; i++ ){
		for(j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
                }
        }
	tp((int *)a, &m, &n);
    	return 0;
}
