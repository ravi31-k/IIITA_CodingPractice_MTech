#include<stdio.h>

int main()
{
	int n;
	int x = 0;
	int i, j;

	scanf("%d", &n);

	int a[n][n];

	for (i = 0; i < n; i++ ){
		for(j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}

	for (i = 0, j = 0 ; i < n; i++, j++){
			x = 0;
			if (i == 0 && j == 0 ){
				x = a[i+1][j] + a[i][j+1] + a[i+1][j+1];
				printf("%d: %d \n", a[i][j] ,x);
			}
			else if ( i == (n-1) && j == (n-1) ){
				x = a[i-1][j] + a[i][j-1] + a[i-1][j-1];
			        printf("%d: %d \n", a[i][j] ,x);
			}
			else {
				x = a[i][j-1] + a[i-1][j] + a[i-1][j-1] + a[i][j+1] + a[i+1][j] + a[i+1][j+1] + a[i-1][j+1] + a[i+1][j-1];
				printf("%d: %d\n", a[i][i], x );
			}
	
	}


	return 0;
}
