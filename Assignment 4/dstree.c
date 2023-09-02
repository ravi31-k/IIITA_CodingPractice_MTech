#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,e,i,j;
	printf("Size:");
	scanf("%d",&n);
	printf("\nNumber Of Edges\n");
	scanf("%d",&e);
	int g[n][n];
	for(i=1;i<=n;i++)
		for(j =1;j<=n;j++)
			g[i][j] = 0;
	int u,v;	
	printf("\nEdges\n");
	for(i = 1; i <= e; i++ ){	
		scanf("%d %d", &u, &v);
		g[u][v] = 1;
		g[v][u] = 1;
	}
	


}

