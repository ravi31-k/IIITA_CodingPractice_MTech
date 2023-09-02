#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
	char data;
	struct node *l;
	struct node *r;
	struct node *parent;
};

int max(int, int);
struct node * alloc(char, struct node *);
void add(struct node **, char);
int height(struct node *);
int inorder_h(struct node *, int);

int main()
{
	int N;
	int i;
	char x;
	struct node *root = NULL;

	scanf("%d", &N);

	for (i = 0; i < N; ++i) {
		fflush(stdin);
		scanf(" %c", &x);
		fflush(stdin);
		add(&root, x);
	}

	printf("%d", inorder_h(root, 0));

	return 0;
}

int max(int x, int y)
{
	if (x > y) {
		return x;
	} else {
		return y;
	}
}

struct node * alloc(char x, struct node *p)
{
	struct node *tmp;
	tmp = (struct node *) malloc(sizeof(struct node));
	tmp->parent = p;
	tmp->data = x;
	tmp->l = NULL;
	tmp->r = NULL;

	return tmp;
}

void add(struct node **root, char x)
{
	if (*root == NULL) {
		*root = alloc(x, NULL);

		return;
	}

	struct node *curr;
	struct node *prev;

	curr = *root;
	while (curr != NULL) {
		prev = curr;
		if (x == curr->data) {
			return;
		}

		if (x < curr->data) {
			curr = curr->l;
		} else {
			curr = curr->r;
		}
	}

	if (x < prev->data) {
		prev->l = alloc(x, prev);
	} else {
		prev->r = alloc(x, prev);
	}

	return;
}

int height(struct node *root)
{
	if (root == NULL) {
		return 0;
	}

	if ((root->l == NULL) && (root->r == NULL)) {
		return 0;
	}

	return (1 + max(height(root->l), height(root->r)));
}

int inorder_h(struct node *root, int sum)
{
	if (root == NULL) {

		return 0;
	}

	sum += inorder_h(root->l, 0);
	sum += height(root);
	sum += inorder_h(root->r, 0);

	return sum;
}
