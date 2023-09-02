#include<stdio.h>
#include<malloc.h>
struct node{
        int data;
        struct node *next;
};

int main()
{

        /////////////////////////Make LL////////////////
        struct node *head = NULL , *node = NULL, *tmp = NULL;
        node = (struct node *) malloc(sizeof(struct node));
        scanf("%d", &node->data);
        node->next = NULL;
        head = node;
        tmp = head;
        for(int i = 0; i < 4; i++){
                node = (struct node *) malloc(sizeof(struct node));
                scanf("%d", &node->data);
                node->next = NULL;
                tmp->next = node;
                tmp = tmp->next;
        }
	 /////////////////////////////////////////////////////
	printf("\ninput ho gaye\n");
	struct node *dummy = (struct node*)malloc(sizeof(struct node));
	struct node *prev = NULL;
	dummy->data = 0;
	dummy->next = head;
	head = head->next;
	dummy->next->next = NULL;
	while(head != NULL){
		tmp = dummy;
		prev = NULL;
		while(tmp != NULL){
			if(head->data > tmp->data){
				prev = tmp;
				tmp = tmp->next;
				break;
                        }
			else if(head->data < tmp->data){
				prev->next = head;
				head = head->next;
				prev->next->next = tmp;
				break;
			}
		//	else{
		//		prev = tmp;
		//		tmp = tmp->next;
		///	}
		//	if(tmp == NULL){
                   //     	tmp->next = head;
                     //   	head = head->next;
                       // 	tmp->next = NULL;
                //	}
			
		}
/*		if(tmp == NULL){
                	prev->next = head;
                        head = head->next;
                        prev->next->next = NULL;
                }
*/
		
	}
	printf("\nIS bhi ho gaya\n");
	//////////////////////Print LL///////////////////
        tmp = head;
        while(tmp != NULL){
                printf("%d->",tmp->data);
                tmp = tmp->next;
        }
        printf("NULL");
        /////////////////////////////////////////////////
	
        return 0;
}
