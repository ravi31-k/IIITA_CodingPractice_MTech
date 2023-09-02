#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *left;
	struct node *right;
};

int top = -1;
int count = 0;
int sum = 0;
void push(int n, struct node *r, struct node *s[])
{
	s[++top] = r;
}

void rtl(int n, struct node *r, struct node *s[n]){
	int t;
	push(n,r,s);
 	if(r->left == NULL && r->right == NULL){
		t = top;
		count++;
		sum = sum + r->data;
		//printf("%d\t", r->data);
		while(t != -1){
			printf("%d\t",s[t]->data);
			--t;
		}
		printf("\n");
		top--;
		return ;
	}
	if(r->left != NULL){
		rtl(n, r->left,s);
	}
	if(r->right == NULL){
		--top;
	}
	else {
		rtl(n, r->right,s);
	}

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
	//printf("%d", root->left->data);
	
	rtl(n, root, stack);
	printf("\n leaves : %d\n",count);
	printf("\nSum of Leaves: %d\n", sum);
	//io(root);

	return 0;
}
	
