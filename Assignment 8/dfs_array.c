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
void dfs(int x, int v, int e, int m[][v], int vi[]){
	 int i,j,y;
                if(vi[x] == 0){
                        vi[x] = 1;
                        printf("%d_ ",x);
                        for(i=1;i<=v;i++){
                                if(m[x][i]==1 && vi[i] ==0){
                                        push(i);
                                }
                        }
                y = pop();
                if(y == -1){
                        return ;
                }
                dfs(y,v,e,m,vi);
	}
}
int main()
{
        int n;
        int e;
        int u;
        int v;
        int i,j;

        scanf("%d", &n);
        scanf("%d", &e);
        int m[n][n];
        int visited[n];
        for(i=1;i<=n;i++){
                for(j=1;j<=n;j++){
                        m[i][j] = 0;
                }
                visited[i] = 0;
        }

        for(i = 0; i<e;i++){
                scanf("%d", &u);
                scanf("%d", &v);
                m[u][v] = 1;
        }

        dfs(1,n,e,m,visited);
	if(visited[n] == 0) printf(" \n%d is not connected to 1",n);
	else printf(" \nyeaheheh %d is connected to 1",n);
        /*for(i=1;i<=n;i++){
                if(visited[i]==0){
                        dfs(i,n,e,m,visited);
                }
        }*/
	return 0;
}
