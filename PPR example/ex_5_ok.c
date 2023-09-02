#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

void create_list(struct node **head, int n);
void print_list(struct node **head);
void delete_odd(struct node **head);

int main()
{
	int n;
	struct node *head = NULL;

	scanf("%d", &n);

	create_list(&head, n);
	print_list(&head);
	delete_odd(&head);
	print_list(&head);

	return 0;
}

void create_list(struct node **head, int n)
{
	struct node *temp = NULL;
	int i;
	int num;

	temp = *head;

	for (i = 0; i < n; i++) {
		struct node *newnode = NULL;

		scanf("%d", &num);
		newnode = (struct node *) malloc(sizeof(struct node()));
		newnode->data = num;
		newnode->next = NULL;

		if (*head == NULL) {
			*head = newnode;
			temp = *head;
		} else {
			temp->next = newnode;
			temp = temp->next;
		}
	}
}

void print_list(struct node **head)
{
	struct node *temp = NULL;
	temp = *head;

	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void delete_odd(struct node **head)
{
	struct node *temp = NULL;
	struct node *curr = NULL;
	struct node *prev = NULL;

	temp = *head;
	curr = temp;

	while (temp != NULL) {
		if ((temp->data % 2) == 1) {
			if (temp == *head) {
				curr = temp;
				temp = temp->next;
				*head = temp;
				free(curr);
				curr = temp;
			} else {
				curr->next = temp->next;
				prev = temp;
				temp = temp->next;
				free(prev);
			}
		} else {
			curr = temp;
			prev = temp;
			temp = temp->next;
		}
	}
}
