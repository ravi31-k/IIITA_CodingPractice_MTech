#include<stdio.h>
#include<malloc.h>
struct node{
        int data;
        struct node *next;
};

int main()
{
        struct node *head = NULL , *node = NULL, *tmp = NULL;
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
	if(head == NULL) return -1;
	struct node *slow= NULL, *fast = NULL;
        slow = head;
        fast = head->next->next;

	if(slow->next == NULL) printf("%d",slow->data);
	
	else if(fast == NULL || fast->next == NULL) printf("%d",slow->next->data);
	
	else if(fast->next->next == NULL) printf("%d",slow->next->next->data);
	
	else{
				while(fast != NULL && fast->next != NULL && fast->next->next != NULL && fast->next->next->next != NULL){
					slow = slow->next;
					fast = fast->next->next;
				}
				 printf("......%d.....",slow->next->next->data);
			}
//////////////////////////////////////////////////////////////
        tmp = head;
        while(tmp != NULL){
              //  printf("%d->",tmp->data);
                tmp = tmp->next;
        }
}
