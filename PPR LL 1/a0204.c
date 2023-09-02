#include<stdio.h>
#include<malloc.h>
struct node{
        int data;
        struct node *next;
};

int main()
{
        struct node *head = NULL , *node = NULL, *tmp = NULL, *tmp1 = NULL, *p = NULL;
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
	
	tmp = NULL;
	while(head != NULL){
		tmp1 = head->next;
		head->next = tmp;
		tmp = head;
		head = tmp1;
	}

	head = tmp;
        while(tmp != NULL){
                printf("%d", tmp->data);
                tmp = tmp->next;
        }


	return 0;
}
