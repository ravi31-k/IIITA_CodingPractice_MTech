#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
};

int main()

{
	struct node *head, *tmp, *newnode;

//////////////////////////////////////////////////////////////////////////////////
	newnode = (struct node *)malloc(sizeof(struct node));
	scanf("%d", &(newnode->data));
	newnode->link = NULL;
	head = newnode;
	tmp = head;
	for(int i=1;i<5;i++){
		
		newnode = (struct node *)malloc(sizeof(struct node));
        	scanf("%d", &(newnode->data));
       		newnode->link =NULL;

		tmp->link = newnode;
		tmp = tmp->link;
	}
	tmp = head;
	while(tmp!=NULL){
		printf("%d->",tmp->data);
		tmp = tmp->link;
	}
	printf("NULL");
	printf("\n____________________________________________________________________________\n");
//////////////////////////////////////////////////////////////////////////////////////////



	return 0;
}
