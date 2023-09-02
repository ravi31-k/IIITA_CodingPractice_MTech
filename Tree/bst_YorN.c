#include<stdio.h>
#include<stdlib.h>
struct node {
        int data;
        struct node *left;
        struct node *right;
};

int bst(struct node *r)
{
	if(r==NULL) return 1;
	else if(r->left == NULL && r->right == NULL) return 1;
	else if(r->left == NULL && r->data < r->right->data) return 1;
	else if(r->right == NULL && r->data > r->right->data) return 1;
	else {
		if(r->data > r->left->data && r->data < r->right->data) return 1;
	}
	return 0;
}

void io(struct node *r){
        if(r == NULL) return;
        io(r->left);
        printf("%d",r->data);
        io(r->right);
}
int main() {
        int n,k;
        int i,j;
        struct node *tmp, *root, *new;
        scanf("%d",&n);
        int arr[n];
        struct node *stack[n];
        for(i = 0; i<n; i++){
                scanf("%d",&arr[i]);
                stack[i] = NULL;
        }

        new = (struct node *)malloc(sizeof(struct node));
        new->data = arr[0];
        new->left = NULL;
        new->right = NULL;

        root = new;

        for(i=1;i<n;i++) {
                k = arr[i];
                tmp = root;
                new = (struct node *)malloc(sizeof(struct node));
                new->data = arr[i];
                new->left = NULL;
                new->right = NULL;

                while(1){

                        if(tmp->data >= k){
                                if(tmp->left == NULL){
                                        tmp->left = new;
                                        break ;
                                }
                                else {
                                        tmp = tmp->left;
                                }
                        }
                        else{
                                if(tmp->right == NULL){
                                        tmp->right = new;
                                        break ;
                                }
                                else {
                                        tmp = tmp->right;
                                }
                        }
                }
        }
	int z;
	z = bst(root);
	if(z == 0) {
		printf("\n --Not BST--\n");
	}
	else {
		printf("\n ++BST++\n");
	}
	return 0;
}
