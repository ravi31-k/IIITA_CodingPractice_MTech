#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define max(x, y) (((x) > (y)) ? (x) : (y))

struct node {
	int data;
	int h;
	struct node *left;
	struct node *right;
};

void io(struct node *r)
{
	//printf("\nOle \n");
	if(r == NULL) return ;
	io(r->left);
	printf("%d ~ %d\t",r->data,r->h);
	io(r->right);
}

struct node* left_rotation(struct node *root){
	struct node *tmp1,*tmp2;		
	if(root->right == NULL) return NULL;
	tmp2 = root->right; 	
	if(tmp2->left == NULL){
		tmp2->left = root;
		root->right = NULL;
	}
	else {
		tmp1 = tmp2->left;
		tmp2->left = root;
		root->right = tmp1;				
	}
	return tmp2;
}

struct node* right_rotation(struct node *root){
	struct node *tmp1,*tmp2;		
	if(root->left == NULL) return NULL;
	tmp2 = root->left; 	
	printf("aaaa:%d\n",tmp2->data);
	if(tmp2->right == NULL){
		tmp2->right = root;
		root->left = NULL;
	}
	else {
		tmp1 = tmp2->right;
		tmp2->right = root;
		root->left = tmp1;				
	}
	printf("b::%d\n",tmp2->data);
	return tmp2;
}

int hh(struct node *root)
{
	if(root == NULL) return 0;
	if(root->left == NULL && root->right == NULL) return 0;
	return root->h; 
}

struct node* tree(struct node *root, int k)
{
	int l,r,x;
	if(root == NULL){
		struct node *new = (struct node *)malloc(sizeof(struct node));
		new->data = k;
		new->h = 0;
		new->left = NULL;
		new->right = NULL;
		return new;
	}
	if(root->data > k){
		root->left = tree(root->left, k);
	}
	else {
		root->right = tree(root->right, k);
	}
	
	l = hh(root->left);
	r = hh(root->right);
	root->h = max(l,r) + 1;
/*
	x = l-r;
	if(x > 1){
		if(root->left->data < k){
			root->left = left_rotation(root->left);
		}
		right_rotation(root);
	}
	else if(x < -1){
		if(root->right->data > k){
			root->right = right_rotation(root->right);
		}
		left_rotation(root);
	}
*/
}


int main() {
	int n;
	int i,k;
	struct node *tmp, *root;
	root = NULL;
	scanf("%d",&n);
	int arr[n];
	for(i = 0; i<n; i++){
		scanf("%d",&k);
		root = tree(root,k);
	}
	io(root);
	return 0;
}
