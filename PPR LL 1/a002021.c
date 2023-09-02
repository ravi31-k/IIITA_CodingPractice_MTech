#include<stdio.h>
#include<malloc.h>
struct node{
        int data;
        struct node *next;
};

int main()
{
        struct node *head1 = NULL, *head2 = NULL , *node = NULL, *tmp = NULL, *tmp1 = NULL;
        int n1,n2;

        printf("NODEs for 1st::");
        scanf("%d", &n1);
        printf("DATA for ll1 : ");
        for(int i=0; i < n1; i++){
                node = (struct node *) malloc(sizeof(struct node));
                scanf("%d", &node->data);
                node->next = NULL;

                if(head1 == NULL){
                        head1 = node;
                        tmp = node;
                }
                else{
                        tmp->next = node;
                        tmp = tmp->next;
                }
        }

        printf("NODEs for 2nd ::");
        scanf("%d", &n2);
        printf("DATA for ll1 : ");
        for(int i=0; i < n2; i++){
                node = (struct node *) malloc(sizeof(struct node));
                scanf("%d", &node->data);
                node->next = NULL;
		
		if(head2 == NULL){
                        head2 = node;
                        tmp = node;
                }
                else{
                        tmp->next = node;
                        tmp = tmp->next;
                }
        }
        printf("\nscan Done\n");

///////////////////////////////////////////////////////////////
        struct node *head = NULL,*m1 = NULL , *m2 = NULL,*l1 = NULL,*l2 = NULL;
        int max1 = head1->data;
        int max2 = head2->data;
        tmp = head1;
        tmp1 = head2;
        while(tmp != NULL){
                if(max1 < tmp->data){
                        max1 = tmp->data;
                        m1 =  tmp;
                }
                tmp = tmp->next;
        }
        while(tmp1 != NULL){
                if(max2 < tmp1->data){
                        max2 = tmp1->data;
                        m2 = tmp1;
                }
                tmp1 = tmp1->next;
        }
        //printf("%d,%d", max1,max2);

        tmp1 = head1;
        while(tmp1 != m1){
		l1 = tmp1;
        	tmp1 = tmp1->next;
        }
        struct node *tmp2 = head2;
        while(tmp2 != m2){
        	l2 = tmp2;
       		tmp2 = tmp2->next;
        }

        if(max1 > max2){
                l1 = tmp1->next;
                m1->next = tmp2;
                while(tmp2->next == NULL){
                        tmp2 = tmp2->next;
                }
                tmp2->next = head;
                l2->next = NULL;
                head = head1;
        }

        /////////////////////////////////////////////////
        while(head != NULL){
                printf("%d->",head->data);
                head = head->next;
        }

        return 0;
}
                                               
