#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define max(x, y) (((x) > (y)) ? (x) : (y))
struct node {
	int data;
	int bf;
	struct node *left;
	struct node *right;
	int h;
};
struct node *rt;
void io(struct node *root)
{
	if(root == NULL) return ;
	io(root->left);
	printf("%d--",root->data);
	io(root->right);
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
int check(struct node *root)
{
		int h;
		//if(flag == 1) return 0;
		int l = 0;
		int r = 0;
		if(root == NULL) return 0;
		if(root->left == NULL && root->right == NULL) return 1;
		l = check(root->left);
		r = check(root->right);
		int x = abs(l-r);
		if(x > 1){
			flag = 1;

		}
		h = max(l,r) + 1;
		return h;
}

void avl(struct node *root,int k)
{
	
}

int main() {
	int n;
	int i,j;
	struct node *tmp, *new;
	scanf("%d",&n);
	int arr[n];
	for(i = 0; i<n; i++){
		scanf("%d",&arr[i]);
	}

	new = (struct node *)malloc(sizeof(struct node));
	new->data = arr[0];
	new->left = NULL;
	new->right = NULL;
	new->h = 1;
	rt = new;
	
	for (int i = 1; i < n; ++i)
	{
		/* code */
		avl(rt,arr[i]);
	}

	return 0;
}