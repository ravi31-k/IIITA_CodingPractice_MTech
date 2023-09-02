#include<stdio.h>
#include<stdlib.h>
int stack[100];
int top = -1;
void push(int a)
{
	stack[++top] = a;
}
int pop()
{
	int tmp;
	tmp = stack[top--];
	return tmp;
}
void dfs(int a, int v, int m[][v], int vi[]){
	int i,j,y;
	if(vi[a] == 0){
		vi[a] = 1;
		printf("\t%d\t",a);
		for(i=1;i<=v;i++){
			if(m[a][i] == 1 && vi[i] == 0){
				push(i);
			}
		}
		y = pop();
		if(y==-1){
			return ;
		}
		dfs(y,v,m,vi);
	}
}

int main()
{
	int n;
	int e;
	int u,v;
	int i,j,k;
	scanf("%d",&n);
	scanf("%d",&e);
	int m[n][n];
	int vi[n];
	int count=0;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			m[i][j] = 0;
		}
		vi[i] = 0;
	}
	for(i=0;i<e;i++){
		scanf("%d",&u);
		scanf("%d",&v);
		m[u][v] = 1;
	}
	printf("\n");



	dfs(1,n,m,vi);
	count++;
	for(i=1;i<=n;i++){
		if(vi[i] == 0){
			count++;
			dfs(i,n,m,vi);
			
		}
		
	}

	printf("\n\n Number of Provinces : %d\n",count);
}
