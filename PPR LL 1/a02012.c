#include<stdio.h>
#include<malloc.h>
struct node{
        int data;
        struct node *next;
};

int main()
{
        int k,x,n,count = 0;
	printf("Nodes :");
        scanf("%d", &n);
	printf("\nPos :");
	scanf("%d",&k);
        struct node *head = NULL , *node = NULL, *tmp = NULL;
        for(int i = 0; i < n; i++){
           	node = (struct node *) malloc(sizeof(struct node));
                        scanf("%d", &node->data);

	   	if(head == NULL){
        		head = node;
        		tmp = node;
			node->next = head;

		}
		else{
                	tmp->next = node;
                	tmp = node;
                	tmp->next = head;
		}
        }
	
	tmp = head;
	printf("\n%d->",tmp->data);
	tmp = tmp->next;
	count++;
	while(1){
		x = k;
		while(x != 1){
			x = x - 1;
			tmp = tmp->next;
		}
	
		if(tmp != head){
			printf("%d->", tmp->data);
			tmp = tmp->next;
		}
		else{
			printf("NULL");
			return 0;
		}
	}


	return 0;
}


