#include <stdio.h> 
#include <stdlib.h> 

struct node { 
int val; 
struct node *next; 
}; 

struct node * add_last(struct node *head, int x); 
void print_list(struct node *head); 

int main() { 
int i; 
struct node *head =NULL; 

print_list(head); 
printf("\n"); 

for (i =-2; i < 10; i += 2)
{ 
head =add_last(head, i); 
} 
printf("\n"); 

print_list(head); 

return 0; } 

/* add a new node at the end */ 
struct node * add_last(struct node *head, int x) { 
struct node *tmp; 
struct node *ptr_node; 

/* create new node as required */ 
ptr_node= (struct node *) malloc(sizeof(struct node)); 
ptr_node->val= x; 
ptr_node->next= NULL; 

/* if the head is NULL, create a new head and return */ 
if (head == NULL) { 
printf("Creating head: %d\n", x); 
return ptr_node; 
} 

/* move to the last node of linked list */ 
printf("     to add %d: (found) ", x); 
for (tmp=head; tmp->next != NULL; tmp=tmp->next) { 
printf(" %d", tmp->val); 
} 
printf(" %d\n", tmp->val); 

tmp->next=ptr_node; 

return head; 
} 

/* print all nodes in the linked list */ 
void print_list(struct node *head) 
{ 
struct node *tmp; 

printf("Traversing linked list:"); 

if (head == NULL) { 
printf(" (empty)\n"); 
return; 
} 

for (tmp=head; tmp != NULL; tmp=tmp->next)
printf(" %d ", tmp->val); 

printf("\n"); 

return; 
} 

