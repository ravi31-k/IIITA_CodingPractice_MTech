#include<stdio.h>
#include<malloc.h>
struct node{
        int data;
        struct node *next;
};

int main()
{

        /////////////////////////Common For All////////////////
        struct node *head = NULL , *node = NULL, *tmp = NULL;
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

        /////////////////////////////////////////////////////

int c;
        printf("Enter Choice:\n    1.at the beginning\n    2.at the end\n    3.at a given position k::\n");
        scanf("%d",&c);
        switch(c){
                case 1:
			tmp = head;
                        head = head->next;
			free(tmp);
                        break;

                case 2:
                                struct node *x;
				tmp = head;
                                while(tmp->next->next!=NULL){
                                        tmp = tmp->next;
                                }
                                x = tmp->next;
				tmp->next = NULL;
				free(x);
                        break;
 		case 3:
                        int pos;
                        printf("Enter Position:");
                        scanf("%d",&pos);
			pos = pos-1;
                        tmp = head;
			struct node *y;
			while(--pos){
				tmp = tmp->next;
			}
			y = tmp->next;
			tmp->next = y->next;
			free(y);	
			break;

                default:
                                printf("\nChoice is Wrong\n");
        }
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
                                         


