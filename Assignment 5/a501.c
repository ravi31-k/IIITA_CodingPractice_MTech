#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *friend;
	struct node *next;
};

struct hash_table 
{
	struct node *key;
	int value;
};
 
int main()
{
	int n, tmp, x;
	struct node *new, *head, *t;
	head = NULL;
	printf("Number of nodes :");
	scanf("%d", &n);
	tmp = n;
	// LL Creation
	while(tmp!=0){
		new = (struct node *)malloc(sizeof(struct node));
                new->next = NULL;
              	new->friend = NULL;

		if(head == NULL){
			head = new;
			t = head;

		}
		else{
			t->next = new;
			t = t->next;
		}
		--tmp;
	}
	printf("\nLL Done\n");
	t =  head;
	// Connect with friend 
	while(t){
		struct node *ttmp;
		ttmp = head;
		scanf("%d",&t->data);
		scanf("%d",&x);
		while(x != 1){
			ttmp = ttmp->next;
			x--;
		}
		t->friend = ttmp;
		t = t->next;
	}
	printf("\nConnection with friend Done\n");
	t = head;
	printf("%p",head);	
	int tsize = 20;
	int hash[20] = {-1};

	return 0;
}
