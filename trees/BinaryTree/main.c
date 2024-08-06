#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *right;
    struct node *left;
};

struct node *createNode(int value)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = value;
    p->left = NULL;
    p->right = NULL;

    return p;
}

void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d", root->data);
    }
}

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d", root->data);
        inOrder(root->right);
    }
}

int main()
{

    struct node *root = createNode(4);
    struct node *node1 = createNode(2);
    struct node *node2 = createNode(1);
    struct node *node3 = createNode(3);
    struct node *node4 = createNode(5);
    struct node *node5 = createNode(6);
    struct node *node6 = createNode(8);
    struct node *node7 = createNode(7);
    struct node *node8 = createNode(9);

    root->left = node1;
    root->right = node5;

    node1->left = node2;
    node1->right = node3;

    node5->left = node4;
    node5->right = node6;

    node6->left = node7;
    node6->right = node8;

    printf("Pre Order is \n");
    preOrder(root);

    printf("\nPost Order is \n");
    postOrder(root);

    printf("\nIN Order is \n");
    inOrder(root);
}