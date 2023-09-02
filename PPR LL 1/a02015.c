#include<stdio.h>
#include<malloc.h>
struct node{
        int data;
        struct node *next;
};

int main()
{
        int k,x;
        scanf("%d", &k);
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
	
	while(head->next != NULL &&  (head->data < head->next->data)){
		p = head;
		head = head->next;
//		free(p);
	}
	tmp = head;
	tmp1 = head->next;
	while(tmp1 != NULL){
		if(tmp1->data < tmp1->next->data){
			tmp->next = tmp1->next;
			free(tmp1);
		}
		else{
			tmp = tmp1;
			tmp1 = tmp1->next;
		}
	}
	tmp = head;
	while(tmp != NULL){
                printf("%d", tmp->data);
                tmp = tmp->next;
        }

	return 0;
}
