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
	io(root);
	return 0;
}
