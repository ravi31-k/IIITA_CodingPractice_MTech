#include<stdio.h>
#include<stdlib.h>
struct node {
	int r;
	int c;
	int time;
};
struct node q[100];
int front = -1;
int rear = -1;
int count = 0;
void push(int i, int j, int t)
{	
	if(front == -1){
		front++;
	}
	q[++rear].r = i;
	q[rear].c = j;
	q[rear].time = t;
//	 printf("%d->%d : %d\n",i,j,t);
//	 printf("%d:%d\n",front,rear);

}
void pop()
{
	front++;
}
void bfs(int n, int c[][n], int vi[][n])
{
//	printf("\n%d:%d\n",front,rear);
	if(rear == -1 || front > rear) return ;
	int i,j,t;
//	printf("sdsfsafsfas fafafasfasd adsfad");
	i = q[front].r;
	j = q[front].c;
	t = q[front].time;
//	vi[i][j] = 2;
//	printf("%d->%d : %d\n",i,j,t);
	if(i>0 && vi[i-1][j] == 1){
		vi[i][j] = 2;
		count = t+1;
		push(i-1,j,t+1);
		//count = t+1;
//		printf("\n%d \n",count);
	}
	else if(j>0 && vi[i][j-1] == 1){
          	vi[i][j] = 2;
                count = t+1;
	  	push(i,j-1,t+1);
	//	count = t+1;
//		printf("\n%d \n",count);
        }
	else if(i<n && vi[i+1][j] == 1){
          	vi[i][j] = 2;
                count = t+1;
	  	push(i+1,j,t+1);
       	//	count = t+1;
//		printf("\n%d \n",count);
       	}
	else if(j<n && vi[i][j+1] == 1){
                vi[i][j] = 2;
                count = t+1;
		push(i,j+1,t+1);
		//count = t+1;
//		printf("\n%d \n",count);
        }
	else{ 	
		pop();
		return ;
	}
	pop();
	bfs(n,c,vi);
}
int main()
{
	int n;
	int i,j,t;
	scanf("%d",&n);
	int c[n][n];
	int vi[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&c[i][j]);
			vi[i][j] = c[i][j];
			if(c[i][j] == 2){
				push(i,j,0);
			}
		}
	}
	bfs(n,c,vi);
	printf("\n%d \n",count);
}
