#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *left;
	struct node *right;
};
int front = -1;
int rear = -1;
void push(struct node *e, struct node *q[])
{
	if(front == -1) {
		++front;
	}
	printf("->%d\n",e->data);
       	q[++rear] = e;	
}

struct node* c_n(int d)
{
	struct node *new = (struct node *)malloc(sizeof(struct node));
        new->data = d;
        new->left = NULL;
        new->right = NULL;
	return new;
}

void io(struct node *r)
{
	if(r== NULL) return ;
	io(r->left);
	printf("%d_", r->data);
	io(r->right);	
}

int sum_t(struct node *r)
{
	if(r == NULL) return 1;
	if(r->left == NULL){
		if(r->right == NULL) return 1;
		else return 0;
	}
	else {
		if(r->right == NULL) return 0;
	}
	return ((r->data == (r->left->data + r->right ->data)) && sum_t(r->left) && sum_t(r->right));
		
}

int main(){
	int n,k;
	int i,j;
	struct node *tmp, *root, *new;
	scanf("%d",&n);
	int arr[n];
	struct node *queue[n];
	for(i = 0; i<n; i++){
		scanf("%d",&arr[i]);
		queue[i] = NULL;
	}
	root = c_n(arr[0]);
	
	push(root,queue);
	k = 1;	
	while(front <= rear){
		tmp = queue[front];
		//printf("->%d\n",tmp->data);
		if(k < n){
			tmp->left = c_n(arr[k++]);
			tmp->right = c_n(arr[k++]);
			push(tmp->left, queue);
			push(tmp->right, queue);
		}
		front = front + 1;
	}
	//io(root);
	int bin;
	bin = sum_t(root);
	if(bin == 0){
		printf("\n--0-- \n");
	}
	else {
		printf("\n--1--\n");
	}
	return 0;
}
