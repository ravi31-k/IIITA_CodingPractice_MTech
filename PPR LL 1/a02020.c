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



