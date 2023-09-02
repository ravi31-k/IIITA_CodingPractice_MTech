#include<stdio.h>
#include<stdlib.h>
struct node {
        int data;
        struct node *left;
        struct node *right;
};
int ide(struct node *r1, struct node *r2)
{	
	if(r1 == NULL && r2 != NULL) {
		return 0;
	}	
	else if(r1 != NULL && r2 == NULL) {
		return 0;
	}	
	else if(r1 == NULL && r2 == NULL) {
		return 1;
	}	
	else if(r1->data == r2->data) {
		return 1 && ide(r1->left, r2->left) && ide(r1->right, r2->right);
	
	}

	return 0;
}

void io(struct node *r){
        if(r == NULL) return;
        io(r->left);
        printf("%d",r->data);
        io(r->right);
}


struct node* create_tree(int n,int a[], struct node *r)
{
	struct node *new, *tmp;
	int i,k;
	new = (struct node *)malloc(sizeof(struct node));
        new->data = a[0];
        new->left = NULL;
        new->right = NULL;

        r = new;

        for(i=1;i<n;i++) {
                k = a[i];
                tmp = r;
                new = (struct node *)malloc(sizeof(struct node));
                new->data = a[i];
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
	return r;
}

int main() {
        int n,k;
        int i,j;
	int result;
        struct node *tmp, *root1, *root2, *new;
        scanf("%d",&n);
        int arr1[n];
	int arr2[n];
        
	for(i = 0; i<n; i++){
                scanf("%d",&arr1[i]);
        }
	for(i = 0; i<n; i++){
                scanf("%d",&arr2[i]);
        }

	root1 = create_tree(n,arr1,root1);
	root2 = create_tree(n,arr2,root2);

	io(root1);
	printf("\n\n");
	io(root2);

	result = ide(root1,root2);	

	if(result == 0){
		printf("N");
	}
	else {
		printf("Y");
	}
	return 0;
}
