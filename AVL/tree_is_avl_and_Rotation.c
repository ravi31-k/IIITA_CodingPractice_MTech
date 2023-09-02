#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define max(x, y) (((x) > (y)) ? (x) : (y))
struct node {
	int data;
	int bf;
	struct node *left;
	struct node *right;
};

void io(struct node *r)
{
	if(r == NULL) return ;
	io(r->left);
	printf("%d--",r->data);
	io(r->right);
}
int flag = 0;
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

int main() {
	int n;
	int i,j;
	struct node *tmp, *root, *new;
	scanf("%d",&n);
	int arr[n];
	for(i = 0; i<n; i++){
		scanf("%d",&arr[i]);
	}

	new = (struct node *)malloc(sizeof(struct node));
	new->data = arr[0];
	new->left = NULL;
	new->right = NULL;
	root = new;

	for (int i = 1; i < n; ++i)
	{
		tmp = root;
		new = (struct node *)malloc(sizeof(struct node));
		new->data = arr[i];
		new->left = NULL;
		new->right = NULL;
		while(1){
			if(tmp->data >  new->data){
				if(tmp->left == NULL){
					tmp->left = new;
					break;
				}
				else {
					tmp = tmp->left;
				}
			}
			else {
				if(tmp->right == NULL){
					tmp->right = new;
					break;
				}	
				else {
					tmp = tmp->right;
				}
			}
		}
	}
	check(root);
	io(root);
	if(flag == 0) printf("\nTree is avl\n");
	else printf("\n Tree is not avl\n");

	int k,ch;
	printf("\n Enter Node :\n");
	scanf("%d",&k);
	printf("\n1.Left\n2.Right\nChoice:");
	scanf("%d",&ch);

	struct node *t1,*t2;
	t1 = root;
	t2 = NULL;
	while(t1->data != k){
		t2 = t1;
		if(k > t1->data){
			t1 = t1->right;
		}
		else{
			t1 = t1->left;
		}
	}
	//printf("%d->%d",t1->data,t2->data);
	if(ch == 1){
		if(t2->left == t1){
			t2->left = left_rotation(t1);
			printf("\naa gaya\n");
		}
		else {
			t2->right = left_rotation(t1);
			printf("\naa gaya\n");
		}
	}
	else{
		if(t2->left == t1){
			printf("\naa gaya yaha tk to\n");
			t2->left = right_rotation(t1);
		}
		else {
			t2->right = right_rotation(t1);
			printf("\naa gaya\n");
		}	
	}

	flag = 0; 
	check(root);
	io(root);
	if(flag == 0) printf("\nTree is avl\n");
	else printf("\n Tree is not avl\n");




	return 0;
}
