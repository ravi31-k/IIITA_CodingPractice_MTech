#include<stdio.h>
#include<stdlib.h>
struct node {
        int data;
        struct node *left;
        struct node *right;
};
int top = -1;
void push(int n, struct node *r, struct node *s[])
{
        s[++top] = r;
}

void anc(int n, struct node *r, struct node *s[n], int x){
        int t;
        push(n,r,s);
	if(s[top]->data == x){
		printf("Ace: ");
		top--;
		while(top != -1){
			printf("->%d",s[top]->data);
			--top;
		}
		return;
	}
        if(r->left == NULL && r->right == NULL){
       		top--;
		return;
       	}
        if(r->left != NULL){
                anc(n, r->left,s,x);
	
        }
        if(r->right == NULL){
                --top;
        }
        else {
        	anc(n, r->right,s,x);	
        }
	--top;

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
	int x;
	printf("Node :");
	scanf("%d",&x);
	anc(n, root, stack, x);

	return 0;
}
