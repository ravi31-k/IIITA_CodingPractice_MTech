#include<stdio.h>

int main()
{
	int m;
	int n;
	int p;
	int q;
	int i;
	int j;
	int k;
	int a[m][n];
	int b[p][q];

	printf("1st size: ");
	scanf("%d %d",&m,&n);

	printf("2nd size: ");
        scanf("%d %d",&p,&q);

	int mm[m][q];
	if(n != p){
		printf("invalide data ");
		return 0;
	}
	
	printf("1st ::");
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("1st ::");
        for(i=0; i<p; i++){
                for(j=0; j<q; j++){
                        scanf("%d", &b[i][j]);
                }
        }



	printf("MUL  ::\n");
        for(i=0; i<m; i++){
		for(j=0; j<q; j++){
			int sum = 0;
			for(k=0; k<p; k++){
         			sum = sum + a[i][k] * b[k][j];
			}
			mm[i][j] = sum;
		}
        }

	for( int i = 0; i<m;i++){
		for(int j = 0 ; j < q ; j++){
			printf("%d",mm[i][j]);
		}
		printf("\n");
	}


         


/*
	 printf("1st ::");
        for(i=0; i<m; i++){
                for(j=0; j<n; j++){
                        scanf("%d", &a[i][j]);
                }
        }

*/
	return 0;
}
