#include<stdio.h>
#include<malloc.h>
struct node{
        int data;
        struct node *next;
};

int main()
{
        struct node *head = NULL , *node = NULL, *tmp = NULL, *tmp1 = NULL;
        int n;

        printf("NODEs ::");
        scanf("%d", &n);

        for(int i=0; i < n; i++){
                node = (struct node *) malloc(sizeof(struct node));
                scanf("%d", &node->data);
                node->next = NULL;

                if(head == NULL){
                        head = node;
                        tmp = node;
                }
                else{
                        tmp->next = node;
                        tmp = tmp->next;
                }
        }
        printf("\nscan Done\n");
///////////////////////////////////////////////////////////////
	struct node *prev = NULL;
	tmp = head;
	tmp1 = head->next;

	tmp->next = tmp1->next;
	tmp1->next = tmp;
	head = tmp1;
	prev = tmp;
	tmp = tmp->next;	

	while(tmp != NULL && tmp->next != NULL){
		tmp1 = tmp->next;
		tmp->next = tmp1->next;
        	tmp1->next = tmp;
		prev->next = tmp1;
		prev = tmp;
        	tmp = tmp->next;
	}


//////////////////////////////////////////////////////////////
        tmp = head;
        while(tmp != NULL){
                printf("%d->",tmp->data);
                tmp = tmp->next;
        }
	printf("NULL");
	return 0;
}
