#include <stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *left;
	struct node *right;
};
struct node *tree(struct node *r, int n, int a[n])
{
	struct node *tmp;
	for(int i = 0; i < n; i++){
		tmp = r;
		struct node *new = ( struct node *)malloc(sizeof( struct node));
		new->data = a[i];
		new->left = NULL;
		new->right = NULL;
		if(tmp == NULL){
			r = new;
			tmp = new;
		}
		else {
			while(1){
				if(a[i] < tmp->data){
					if(tmp->left == NULL){
						tmp->left = new;
						break;
					}
					else tmp = tmp->left;
				}
				else {
					if(tmp->right == NULL){
						tmp->right = new;
						break;
					}
					else tmp = tmp->right;
				}
			}
		}
	}
	return r;
}
void io(struct node *r)
{
	if(r == NULL) return;
	io(r->left);
	printf("%d ",r->data);
	io(r->right);
}

void del(struct node *r)
{
	if(r == NULL) return;
	if(r->left == NULL && r->right == NULL){
		return ;
	}
	if(r->left != NULL){
		struct node *tmp1 = r->left;
		struct node *tmp2 = r;
		int flag = 0;
		while(tmp1->right != NULL){
			tmp2 = tmp1;
			tmp1 = tmp1->right;
			flag = 1;
		}
		r->data = tmp1->data;
		if(tmp1->left == NULL){
			if(flag == 1){
				tmp2->right = NULL;
			}
			else {
				tmp2->left = NULL;
			}
		}
	}
	else if(r->right != NULL){
		struct node *tmp1 = r->right;
		struct node *tmp2 = r;
		int flag = 0;
		while(tmp1->left != NULL){
			tmp2 = tmp1;
			tmp1 = tmp1->left;
			flag = 1;
		}
		printf("%d  ",r->data);
		r->data = tmp1->data;
		if(tmp1->left == NULL){
			if(flag == 1){
				tmp2->left = NULL;
			}
			else {
				tmp2->right = NULL;
			}
		}
	}
}
int main() {
// Write C code here
	int n;
	int i,k;
	scanf("%d", &n);
	int arr[n];
	printf("input do");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	struct node *root = NULL;
	root = tree(root,n,arr);
	printf("\nDone input %d\n",root->data);
	//io(root);
	printf("\n Deleting\n");
	for(i=0;i<n;i++){
		del(root);
		io(root);
		printf("\n");
	}
	return 0;
}
