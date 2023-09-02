#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,k,sum;
	int a[n][n];
	int r[n];
	
	
	scanf("%d", &n);

	for(i = 0; i < n; i++){
//		sum = 0;
		for(j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
//			sum = sum + a[i][j];	
		}
//		r[i] = sum;
	}
/*	for(j = 0; j < n; j++){
		sum = 0;
		for(i = 0; i < n; i++){
			sum = sum + a[i][j];	
	 	}
		printf("%d\t\t", sum);
*		for(k = 0; k < n; k++){
			if(r[k] == sum){
				printf("Row : %d \n Column : %d", k+1, j+1);
			}
		}
*///	}
	
	for(int i=0;i<n;i++)
	{	
		sum = 0;
		for(int j=0;j<n;j++)
		{
			sum+=a[j][i];
		}
		printf("%d\t",sum);
	}

	return 0;
}
