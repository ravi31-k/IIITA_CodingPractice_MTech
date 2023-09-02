#include<stdio.h>
#include<stdlib.h>
struct node {
        int data;
        struct node *left;
        struct node *right;
};
void dn(struct node *r){
	struct node *tmp1,*tmp2;
	if(r == NULL) return ;
	tmp1 = r->left;
	tmp2 = r->right;
	r->left = NULL;
	r->right = NULL;
	printf("%d_",r->data);
	free(r);
	dn(tmp1);
	dn(tmp2);
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
        struct node *tmp, *root1;
        scanf("%d",&n);
        int arr1[n];
        int arr2[n];

        for(i = 0; i<n; i++){
                scanf("%d",&arr1[i]);
        }

        root1 = create_tree(n,arr1,root1);

        dn(root1);

}

