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

        /////////////////////////////////////////////////////
	int minD = head->data;
	tmp = head->next;
	struct node *min= head;

	while(tmp != NULL){
		if(minD > tmp->data){
			minD = tmp->data;
			min = tmp;
		}
		tmp = tmp->next;
	}
	printf("Minimum = %d\n", minD);

	min->prev->next = min->next;
	min->next->prev = min->prev;
	free(min);

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
