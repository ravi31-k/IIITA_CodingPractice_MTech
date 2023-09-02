#include <stdio.h>
#include <stdlib.h>
#define MAX 256

struct node{
int data;
struct node *left;
struct node *right;
};

struct node* alloc(int x)
{
	struct node *tmp;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->data=x;
	tmp->left=tmp->right=NULL;
	return tmp;
}

void insert(struct node **root, int x)
{
	struct node *curr;
	struct node *prev;
	if(*root == NULL){
		*root = alloc(x);
		return;
	}
	curr=*root;
	prev=NULL;
	while(curr!=NULL) {
		prev=curr;
		if(x==curr->data)
		{
			printf("\n\tAll input elements should be unique according to question!\n\n");
			exit(1);
		}
		if(x < curr->data)
		{
			curr = curr->left;
		} 
		else
		{
			curr = curr->right;
		}
	}

	if(x<prev->data) prev->left = alloc(x);
	else prev->right = alloc(x);
	return;
}

/* Method 1 to compute preorder predecessor sum
 */
int preorder_sum(struct node *curr, int k)
{
	int sum = 0;
	
	if(curr==NULL) return 0;
	
	if(curr->data==k) return 0;
	
	sum+=curr->data;
	sum+=preorder_sum(curr->left, k);
	if(k>curr->data) sum += preorder_sum(curr->right, k);
	return sum;
}

/* Method 2: Store all elements in an array, in preorder traversal, then sum later
 */
int preorder(struct node *root, int a[], int i)
{
	if(root==NULL) return i;

	a[i] = root->data;
	++i;
	i=preorder(root->left,a,i);
	i=preorder(root->right,a,i);
	return i;
}

int main()
{
	int n,k,i,x,a[MAX],sum;
	struct node *root = NULL;

	scanf("%d %d",&n,&k);

	for(i=0;i<n;++i) {
		scanf("%d",&x);
		insert(&root,x);
	}

	x=preorder(root,a,0);
	sum=0;
	for(i=0;i<x;++i) {
		if (a[i]==k) break;
		sum+=a[i];
	}

	printf("%d",sum);

	return 0;
}
