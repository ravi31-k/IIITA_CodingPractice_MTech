#include<stdio.h>
#include<malloc.h>
struct node{
        int data;
        struct node *next;
};

int main()
{

        /////////////////////////Common For All////////////////
        struct node *head = NULL , *node = NULL, *tmp = NULL, *prev = NULL;
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
                prev = tmp;
		tmp = tmp->next;
        }
	prev->next = head;


        /////////////////////////////////////////////////////

	int count = 0, sum = 0;
	tmp = head->next;
	while(tmp != head){
		if(count%2 == 0){
			sum = sum + tmp->data;
		}
		count++;
		tmp = tmp->next;
	}
	printf("Sum : %d",sum);
	return 0;
}
