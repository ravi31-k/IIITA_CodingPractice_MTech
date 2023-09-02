#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	int count;
	struct node *left;
	struct node *right;
};

struct node * get_node(int num);
struct node * insert_node(struct node *root, int num);
int count_predecessor(struct node *root, int count);
void print_predecessor(struct node *root, int k);

int main()
{
	int i;
	int n;
	int k;
	int num;
	struct node *root = NULL;

	scanf("%d %d", &n, &k);

	for (i = 0; i < n; i++) {
		scanf("%d", &num);
		root = insert_node(root, num);
	}

	count_predecessor(root, 0);
	print_predecessor(root, k);

	return 0;
}

struct node * get_node(int num)
{
	struct node *newnode = NULL;

	newnode = (struct node *) malloc(sizeof(struct node));
	newnode->data = num;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->count = 0;

	return newnode;
}

struct node * insert_node(struct node *root, int num)
{
	if (root == NULL) {
		return get_node(num);
	} else if (root->data > num) {
		root->left = insert_node(root->left, num);
	} else if (root->data < num) {
		root->right = insert_node(root->right, num);
	}

	return root;
}

int count_predecessor(struct node *root, int count)
{
	if (root == NULL) {
		return count;
	}

	root->count = count;
	count = count + root->data;
	count = count_predecessor(root->left, count);
	count = count_predecessor(root->right, count);

	return count;
}

void print_predecessor(struct node *root, int k)
{
	if (root == NULL) {
		return;
	} else if (root->data == k) {
		printf("%d  ", root->count);
	}

	print_predecessor(root->left, k);
	print_predecessor(root->right, k);
}
