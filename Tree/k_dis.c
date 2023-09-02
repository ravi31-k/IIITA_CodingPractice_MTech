#include<stdio.h>
#include<stdlib.h>
struct node {
        int data;
        struct node *left;
        struct node *right;
};

void k_dis(struct node *r, int k, int h) {
	if(r == NULL) return ;
	if(k == h) {
		printf(" %d ", r->data);
		return;
	} 
	if(r->left == NULL && r->right == NULL) return ;
	k_dis(r->left, k, h+1);
	k_dis(r->right, k, h+1);
}

int main() {
        int n,x,k;
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
	printf("\nDis: ");
	scanf("%d",&x);
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
        //printf("%d", root->left->data);
	
	k_dis(root, x, 0);

	return 0;
}
