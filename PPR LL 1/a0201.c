#include<stdio.h>
#include<malloc.h>
struct node{
        int data;
        struct node *next;
};

int main()
{
        
	/////////////////////////Common For All////////////////
	struct node *head = NULL , *node = NULL, *tmp = NULL;
        node = (struct node *) malloc(sizeof(struct node));
        scanf("%d", &node->data);
        node->next = NULL;
        head = node;
        tmp = head;
        for(int i = 0; i < 6; i++){
                node = (struct node *) malloc(sizeof(struct node));
                scanf("%d", &node->data);
                node->next = NULL;
                tmp->next = node;
                tmp = tmp->next;
        }

	/////////////////////////////////////////////////////
	
	int c; 
	printf("Enter Choice:\n    1.at the beginning\n    2.at the end\n    3.at a given position k::\n");
	scanf("%d",&c);
	switch(c){
		case 1:
			printf("Add node at begining:\nEnter data: ");
			node = (struct node *) malloc(sizeof(struct node));
        		scanf("%d", &node->data);
        		node->next = head;
			head = node;
			break;

		case 2:
			if(head == NULL){
				head == node;
			}
			else{
				printf("Add node at end:\nEnter data: ");
                        	node = (struct node *) malloc(sizeof(struct node));
                        	scanf("%d", &node->data);
                        	node->next = NULL;
				tmp = head;
				while(tmp->next!=NULL){
					tmp = tmp->next;
				}
				tmp->next = node;
			}
			break;
		case 3:
			int pos;
			printf("Enter Position:");
			scanf("%d",&pos);
			printf("Add node at position %d:\nEnter data: ",pos);
                                node = (struct node *) malloc(sizeof(struct node));
                                scanf("%d", &node->data);
                                node->next = NULL;
				break;

		default:
				printf("\nChoice is Wrong\n");
	}
	//////////////////////Prtin Data///////////////////
	tmp = head;
	while(tmp != NULL){
		printf("%d->",tmp->data);
		tmp = tmp->next;
	}
	printf("NULL");
	/////////////////////////////////////////////////

	return 0;
}
