#include<stdio.h>
#include<malloc.h>
struct node{
        int data;
        struct node *prev;
        struct node *next;
};

int main()
{

        /////////////////////////Common For All////////////////
        struct node *head = NULL , *node = NULL, *tmp = NULL;
        int n;
        scanf("%d\n",&n);
        node = (struct node *) malloc(sizeof(struct node));
        scanf("%d", &node->data);
        node->next = NULL;
        node->prev = NULL;
        head = node;
        tmp = head;
        for(int i = 0; i < n-1; i++){
                node = (struct node *) malloc(sizeof(struct node));
                scanf("%d", &node->data);
                node->next = NULL;
                node->prev = tmp;
                tmp->next = node;
                tmp = tmp->next;
        }
	///////////////////////////////////////////////////
	struct node *cur;
	tmp = head;
    	while (tmp != NULL) {
        	cur = tmp;
        	tmp = tmp->next;
        	cur->next = cur->prev;
        	cur->prev = tmp;
    	}
	
	head = cur;

	//////////////////////dPrtin Data///////////////////
        tmp = head;
        while(tmp != NULL){
                printf("%d->",tmp->data);
                tmp = tmp->next;
        }
        printf("NULL");
        /////////////////////////////////////////////////



        return 0;
}


