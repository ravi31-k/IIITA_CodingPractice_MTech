#include<stdio.h>
#include<stdlib.h>
#define N 10000
struct node{
        int data;
        struct node *l;
	struct node *r;
};

struct node *parent[N];

void make(struct node *v)
{
        parent[v->data] = v;
     //   size[v] = 1;
        
}
void Union(int a, int b)
{
	if(a != b){
		if(a < b){
        		int tmp = a;
        		a = b;
                	b = tmp;
		}
	
		if(parent[a]->l != NULL){	
			parent[a]->l = parent[b];
		}
		else{
			parent[a]->r = parent[b];
		}
		if(parent[b] > parent[a]){
			parent[b] = parent[a];
		}
		else parent[a] = parent[b];
	}
}
void inorder(struct node *nn){
//	if(parent[])
	while(nn != NULL){
		inorder(nn->l);
		printf("%d",nn->data);
		inorder(nn->r);
	}	
}




/*
int find(int v)
{
        if(v == parent[v]){
                return v;
        }
        else { //Path Compression
                return parent[v] = find(parent[v]);
        }
}
*/

int main()
{
        int n,k;
       // scanf("%d",&n);
        scanf("%d",&k);
        for(int i = 0; i < 10; i++){
                struct node *tmp = (struct node*)malloc(sizeof(struct node));
		tmp->data = i;
		tmp->l = NULL;
		tmp->r = NULL;
		make(tmp);
        }
	
	 printf("\nbn gaye sb or ab kis kis ko union krwana hai\n");
        while(k--){
                int u,v;
                scanf ("%d", &u);
                scanf("%d", &v);
                Union(u,v);
        }
        printf("\nUnion ho gaya\n");
	
	for(int i = 0 ; i<10; i++){
		if(parent[i]->data == i)
	//		inorder(parent[i]);
			printf("%d\n",parent[i]->data);
	}

//	int x = parent[4]->data;
//	printf("%d",x);
	return 0;
}
