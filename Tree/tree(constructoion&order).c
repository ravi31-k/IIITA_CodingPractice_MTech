#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *left;
	struct node *right;
};

void inorder(struct node *r)
{	
	if(r==NULL) return;

	inorder(r->left);
	printf("%d\t", r->data);
	inorder(r->right);
}

void preorder(struct node *r)
{
        if(r==NULL) return;
	printf("%d\t", r->data);
        preorder(r->left);
       // printf("%d\t", r->data);
        preorder(r->right);
}
void postorder(struct node *r)
{
        if(r==NULL) return;

        postorder(r->left);
//        printf("%d\t", r->data);
        postorder(r->right);
	printf("%d\t", r->data);
}


int main()
{
	int n,i;
	struct node *root, *tmp;
	scanf("%d",&n);
	int arr[n];
	for(i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
	struct node *new = (struct node *)malloc(sizeof(struct node));
	new->data = arr[0];
	new->left = NULL;
	new->right = NULL;
	root = new;
	tmp = root;
	for(i=1;i<n;i++){
		tmp = root;
		struct node *new = (struct node *)malloc(sizeof(struct node));
		new->data = arr[i];
		new->left = NULL;
		new->right = NULL;
		while(tmp!=NULL){
			if(tmp->data >= new->data){
				if(tmp->left == NULL){
					tmp->left = new;
					break;
				}
				else{
					tmp = tmp->left;
				}
			}
			else{
				if(tmp->right == NULL){
                                        tmp->right = new;
					break;
                                }
                                else{
                                        tmp = tmp->right;
				}
			}
		}
	}
//	tmp = root;
//
	printf("preorder : ");
        preorder(root);

	printf("\nInorder : ");
	inorder(root);

	printf("\npostorder : ");
        postorder(root);

	return 0;
}
