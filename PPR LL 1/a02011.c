#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
};

int main()
{
	int k,x,n;
	printf("k :");
	scanf("%d", &k);
	printf("Number od nodes :");
	scanf("%d", &n);

	///////////////  LL Creation
	struct node *head = NULL , *node = NULL, *tmp = NULL;
	head = node;
	tmp = head;
	for(int i = 0; i < n; i++){
		node = (struct node *) malloc(sizeof(struct node));
                scanf("%d", &node->data);
                node->next = NULL;
		if(head == NULL){
			head = node;
		        tmp = head;
		}
		else{
			tmp->next = node;
			tmp = tmp->next;
		}
	}
	////////////////////////
	
	tmp = head;
	printf("%d->",tmp->data);
	while(tmp != NULL){
		 x = k;
		 while(x != 0 && tmp != NULL){ // jb tk kth element na aajae ya fir ll khatam na ho jae
		 	tmp = tmp->next;
			x = x-1;
		 }
		 if(tmp != NULL){            // agr ll khatam na hui or kth element tk pahuch gay to usko print krwa diya
		 	printf("%d->", tmp->data);
		 }
		 
	}
	printf("NULL");
	return 0;
}
