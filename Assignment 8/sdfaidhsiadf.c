#include<stdio.h>
#include<stdlib.h>
int stack[100];
int top = -1;
void push(int a){
    stack[++top] = a;
}
int pop(){
    int tmp;
    if(top == -1) return 0;
    tmp = stack[top--];
    return 0;
}
int dfs(int x, int y, int m[][y], int vi[]){
    int z,i;
    if(vi[x] == 0){
        vi[x] = 1;
        for(i=1;i<=y;i++){
            if(m[x][i] == 1 && vi[i] ==0){
                push(i);
            }
        }
        z = pop();
        if(z==-1){
            return 0;
        }
        dfs(z,y,m,vi);
    }
    return 0;
}
int solve(int A, int** B, int n21, int n22) {
        int m[A][A];
        int i,j;
        int v[A+1];
        
        for(i=1; i < A+1; i++){
            v[i] = 0;
        }
        for(i = 1;i<=A; i++){
            for(j=1;j<=A;j++){
                m[i][j] = 0;
            }
        }
        
        for(i=0;i<n21;i++){
            m[B[i][0]][B[i][1]] = 1;
        }
        
        dfs(1,A,m,v);
        top = -1;
        return 1;
}
int main()
{
	int n, n21,n22;
	scanf("%d",&n);
	scanf("%d",&n21);
}


