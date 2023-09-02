#include<stdio.h>
#include<stdlib.h>
struct node {
        int data;
        struct node *left;
        struct node *right;
};

void mirror(struct node *r) {
	struct node *tmp;
	if(r == NULL) return;
	if(r->left  == NULL && r->right == NULL) return ;
	tmp = r->right;
	r->right = r->left;
	r->left = tmp;
	mirror(r->left);
	mirror(r->right);
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
	printf("\n");
	io(root);
	mirror(root);
	printf("\n");
 	io(root);	
 	return 0;
}
