#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *left;
	struct node *right;
};

int find(int in[], int n, int key)
{
	int i = 0;
	while(in[i] != key){
		i++;
	}
	return i;
}

struct node* bt(int s, int n, int in[], int po[], int *pp)
{
	int key, x;

	if(s > n) return NULL;
	
	key = po[*pp];
	(*pp)--;
	x = find(in, n, key);
	
	struct node *new = (struct node *)malloc(sizeof(struct node));
	new->data = key;
	new->left = NULL;
	new->right = NULL;
	
	if(s == n) return new;

	new->right = bt(x+1, n, in, po, pp);
	new->left = bt(s, x-1, in, po, pp);	
	
	return new;
}
struct node* bbt(int in[], int po[], int n)
{
	int pi = n-1;
	return bt(0,n,in,po,&pi);
}

int main()
{
	int n,i,pp;
	struct node *root, *tmp;
	scanf("%d",&n);
	int in[n];
	int po[n];
	root = NULL;
	for(i = 0; i < n; i++){
		scanf("%d",&in[i]);
	}
	for(i = 0; i < n; i++){
                scanf("%d",&po[i]);
        }
	pp = n-1;
	root = bt(0, n-1, in, po, &pp);
}
