#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define max(x, y) (((x) > (y)) ? (x) : (y))
struct node {
	int data;
	struct node *left;
	struct node *right;
};
int h;
void io(struct node *r)
{
	if(r == NULL) return ;
	io(r->left);
	printf("%d--",r->data);
	io(r->right);
}
int height(struct node *r)
{	int ll = 0;
	int rr = 0;
//	if(r == NULL ) return 0;
	if(r->left == NULL && r->right == NULL) {
		printf("%d->0\n", r->data);
		return 0;
	}
	if(r->left != NULL){
		 ll = height(r->left);
	}
	if(r->right != NULL){
		 rr = height(r->right);
	}
	h = 1 + max(ll, rr);
	printf("%d->%d\n", r->data, h);
	return h;
}


int main() {
	int n,k;
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
	io(root);
	printf("\n");
	height(root);
	return 0;
}
