#include<stdio.h>
#include<stdlib.h>
int queue[1000];
int front = -1;
int rear = -1;
void enqueue(int a){
	if(front == -1){
		front++;
	}

	queue[++rear] = a;

}
int dequeue() {
	if(front>rear || front ==-1){
		return -1;
	}
	int tmp = queue[front];
	front++;
	return tmp;

}
void bfs(int x, int v, int e, int m[][v], int vi[])
{
		int i,j,y;
		if(vi[x] == 0){
			vi[x] = 1;
			printf("%d->",x);
			for(i=1;i<=v;i++){
				if(m[x][i]==1 && vi[i] ==0){
					enqueue(i);
				}
			}
		y = dequeue();
                if(y == -1){
	                return ;
                }
                bfs(y,v,e,m,vi);
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
	
	bfs(1,n,e,m,visited);
	for(i=1;i<=n;i++){
		if(visited[i]==0){
			bfs(i,n,e,m,visited);
		}
	}
}

