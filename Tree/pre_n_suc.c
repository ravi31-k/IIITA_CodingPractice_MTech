#include<stdio.h>
#include<stdlib.h>
struct node {
        int data;
        struct node *left;
        struct node *right;
};

int b = 0;

void io(struct node *r, int a[]){
        if(r == NULL) return;
        io(r->left,a);
	a[b++] = r->data;
       // printf("%d",r->data);
        io(r->right,a);
}
int main() {
        int n,k;
        int i,j;
        struct node *tmp, *root, *new;
        scanf("%d",&n);
        int a[n];
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

                while(1) {
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
	int t;
	printf("Enter Node :");
	scanf("%d",&t);
	io(root,a);
	for(i=0;i<n;i++){
		if(a[i] == t){
			if(i>0 && i<n-1){
				printf("\nPredecessor:%d \n Successor: %d",a[i-1],a[i+1]);
			}
			else if(i>0) {
			       	printf("\nPredecessor: None \n Successor: %d",a[i+1]);
			}
			else {
				printf("\nPredecessor:%d \n Successor: None",a[i-1]);
			}
		}
	}
	return 0;
}
