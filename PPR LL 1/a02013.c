#include<stdio.h>
#include<stdlib.h>
struct node{
        int data;
        struct node *next;
};

int main()
{
        int count;
        struct node *head = NULL , *node = NULL,*p=NULL, *tmp = NULL, *tmp1 = NULL;
        node = (struct node *) malloc(sizeof(struct node));
        scanf("%d", &node->data);
        node->next = NULL;
        head = node;
        tmp = head;
        for (int i = 0; i < 6; i++) {
                node = (struct node *) malloc(sizeof(struct node));
                scanf("%d", &node->data);
                node->next = NULL;
                tmp->next = node;
                tmp = tmp->next;
        }
	p = head;
	while (p != NULL) {
		count = 0;
		tmp = p;
		tmp1 =tmp->next; 
		while (tmp1 != NULL) {
			if(p->data == tmp1->data){
				tmp->next = tmp1->next;
				free(tmp1);
				tmp1 = tmp->next;
			}
			else {
				tmp = tmp1;
				tmp1 = tmp1->next;
			}
		}
		p = p->next;
	}
	tmp = head;
	while(tmp != NULL){
		printf("%d->", tmp->data);
		tmp = tmp ->next;
	}
	printf("NULL");
	return 0;
}

