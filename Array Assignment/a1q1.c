#include <stdio.h>

int main()
{
	int n;
	int a[n];
	int sum = 0;
	int x;
	int i , j;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
		sum = sum + a[i];
	}
	printf("\n");
	x = sum / (n*(n-1));

	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(i == j){
				printf("%d ", a[i]);
			}
			else{
				printf("%d ", x+1);
			}
		}
		printf("\n");
	}
	return 0;
}
