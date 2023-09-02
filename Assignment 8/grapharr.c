#include<stdio.h>


int q[1000];
int r=-1;
int f=-1;

void enqueue(int i){
	if(f==-1){
		f++;
	}
	q[++r] = i;
}

int dequeue()
{	if(f == -1 || f > r) return -1;
	return q[f++];
}

void bfs(int p , int n, int e, int arr[n][n], int vis[n])
{
	if(vis[p] == 0){
		vis[p] = 1;
		printf("%d ",p);
		for(int i=0;i<n;i++){
			if(arr[p][i] == 1 && vis[i] == 0){
				enqueue(i);
			}
		}
		int y = dequeue();
		if(y == -1){
			return ;
		}
		bfs(y,n,e,arr,vis);
	}
}

int main()
{
	int e;
	int n;
	int u,v;
	scanf("%d", &n);
	scanf("%d", &e);
	int ed[n][n];
	int visited[n];
	for(int i = 0;i<n;i++){
		for(int j =0; j<n; j++){
			ed[i][j] = 0;
		}
		visited[i] = 0;
	}
	for(int i = 0; i < e; i++){
		scanf("%d",&u);
		scanf("%d",&v);
		ed[u][v] = 1;
		ed[v][u] = 1;
	}
	printf("+++\n ");
	bfs(1,n,e,ed,visited);
	for(int i=1;i<=n;i++){
		if(visited[i]==0){
			bfs(i,n,e,ed,visited);
		}
	}
	
	
}
