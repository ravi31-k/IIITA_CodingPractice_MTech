#include<stdio.h>
#include<malloc.h>
struct node{
        int data;
        struct node *next;
};

struct node* reverse(struct node *head)
{
	 struct node *next;
        struct node *prev = NULL;
	struct node *curr = head;
        while(curr != NULL){
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
         }
         if(next != NULL){
                head->next = reverse(next);
         }
         return prev;

}

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

	/////////////////////////////FIND MIDDLE //////////////////////////////////////////////
	
       	if(head == NULL) return -1;
        struct node *slow= NULL, *fast = NULL, *end1 = NULL, *start1, *start2;
        slow = head;
        fast = head->next->next;

        if(head->next == NULL){
	       	printf("\nPalindrome\n");
		return 0;
	}
        else if(fast == NULL) {
		if(slow->data == slow->next->data) printf("\nPalindrome\n");
		else printf("\nNOT Palindrome\n");	
		return 0;
	}
	else if( fast->next == NULL){
	       	if(slow->data == fast->data) printf("\nPalindrome\n");
                else printf("\nNOT Palindrome\n");
		return 0;
	}
        else if(fast->next->next == NULL) {
		if((slow->data == fast->next->data) && (slow->next->data == fast->data)){
			printf("\nPalindrome\n");
		}
		else{
			printf("\nNot Palindrome\n");
		}
		return 0;
	}
        else{
        	while(fast != NULL && fast->next != NULL && fast->next->next != NULL && fast->next->next->next != NULL){                    
	       		slow = slow->next;
                        fast = fast->next->next;
		}
                printf("......%d.....",slow->next->next->data);
		start1 = head;
		end1 = slow->next;
		start2 = slow->next->next;			
		/////////////////< reverse  >///////////////////////
		end1->next = reverse(start2);
		
		tmp = head;
		tmp1 = end1->next;
        	while(tmp != end1->next){
			if(tmp->data == tmp1->data){
				tmp = tmp->next;
				tmp1 = tmp1->next;
			}
			else{
				printf("\nNot Pallindrom\n");
				return 0;
			}
		}	
			printf("\nPallindrom\n");
   	}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			
			printf("start1 = %d ,end1 :%d.....\n start2 : %d.\n",head->data, end1->data, start2->data);
			// we have (head==1)->2->(3=end)->4->5->6
			
/////////////////////////////////////////////Go For Reverse//////////////////////////////////////////////////////////////////

	return 0;
}
