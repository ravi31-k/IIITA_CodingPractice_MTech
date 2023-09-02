#include<stdio.h>
#include<stdlib.h>
int p[100000];
int n;
//int p[n];
void makeset(){
	for(int i=1;i<=n;i++) {
		p[i]=i;
	}
}

int find(int node)
{
		if(node==p[node]) return node;
	return p[node]=find(p[node]);
}
void unio(int s,int v)
{
	int a=find(s);
	int b=find(v);
	if(a==b) {
		return;
	}
	p[b]=a;
}
int main()
{
	//int n;
	scanf("%d",&n);
	int a[n][n];
	
	makeset();
	
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		scanf("%d",&a[i][j]);
		}
	}
	//check disconnected or not
	
	
	int f=0;
	for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		if(a[i][j]==1 && i<j) {
    			int x=find(i);
    			int y=find(j);
    			if(x==y && f==0){
    				printf("y");
    				f=1;
				}
				else {
					unio(x,y);
				}
			}
			if(f==1){
				break;
			}
		}
	}
	
	printf("\n");
	for(int i=1;i<=n;i++) {
		printf(" %d ",p[i]);
	}
	return 0;
}
