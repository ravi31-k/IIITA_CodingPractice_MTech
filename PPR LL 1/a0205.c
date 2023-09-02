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
	int min , max;
	min = head->data;
	max = head->data;
	
	tmp = head->next;
	while(tmp != NULL){
		if(tmp->data > max){
			max = tmp->data;
		}
		if(tmp->data < min){
			min = tmp->data;
		}
		tmp = tmp->next;
	}
	
	printf("\n MAX : %d\n MIN : %d \n MIN-MAX : %d",max, min, (max-min));
	/*
	//////////////////////Prtin Data///////////////////
        tmp = head;
        while(tmp != NULL){
                printf("%d->",tmp->data);
                tmp = tmp->next;
        }
        printf("NULL");
        /////////////////////////////////////////////////
*/
        return 0;
}

