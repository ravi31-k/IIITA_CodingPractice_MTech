#include<stdio.h>
#include<stdlib.h>
struct node{
        int data;
        struct node *next;
};

struct node *reverse(struct node *head, int k){
	struct node *next;
	struct node *prev = NULL;
	int c = 0;
	struct node *curr = head;
	while(curr != NULL && c < k){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
		c++;
	 }
	 if(next != NULL){
	 	head->next = reverse(next,k);
	 }
	 return prev;
}

int main()
{
        struct node *head = NULL , *node = NULL, *tmp = NULL, *tmp1 = NULL, *p = NULL;
        int k,count = 0;
        scanf("%d", &k);
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

	tmp1 = reverse(head, k);
	
	tmp = tmp1;
        while(tmp != NULL){
        	printf("%d->", tmp->data);
                tmp = tmp ->next;
        }


	return 0;
}
