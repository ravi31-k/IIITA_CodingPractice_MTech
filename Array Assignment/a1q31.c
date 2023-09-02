#include<stdio.h>

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
	printf("\n ---- \n");
	int arr[n][m];
	for (i = 0; i < m; i++ ){
		for(j = 0; j < n; j++){
			arr[j][i] = a[i][j];
                }
        }
	
	for (i = 0; i < n; i++ ){
		for(j = 0; j < m; j++){
			printf("%d ", arr[i][j]);
                }
                printf("\n");
        }
	
    	return 0;
    	
}
