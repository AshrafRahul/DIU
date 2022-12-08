#include<stdio.h>

struct node
{
	int key;
	struct node *left, *right;
};

struct node *newNode(int item)
{
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}

void inorder(struct node *root)
{
	if (root != NULL)
	{
		inorder(root->left);
		printf("%d\n", root->key);
		inorder(root->right);
	}
}


void print_preorder(struct node * root)
{
    if (root)
    {
        printf("%d\n", root->key);
        print_preorder(root->left);
        print_preorder(root->right);
    }

}

void print_postorder(struct node * root)
{
    if (root)
    {
        print_postorder(root->left);
        print_postorder(root->right);
        printf("%d\n", root->key);
    }
}

struct node* insert(struct node* node, int key)
{

	if (node == NULL) return newNode(key);

	if (key < node->key)
		node->left = insert(node->left, key);
	else if (key > node->key)
		node->right = insert(node->right, key);

	return node;
}

int main()
{
	struct node *root = NULL;
	root = insert(root, 30);
	insert(root, 15);
	insert(root, 7);
	insert(root, 22);
	insert(root, 17);
	insert(root, 27);
	insert(root, 60);
	insert(root, 45);
	insert(root, 75);

	printf("\nPre-Order \n");
	print_preorder(root);
	printf("\nIn-order");
	inorder(root);
	printf("\n\nPost Order \n");
	print_postorder(root);


	return 0;
}
