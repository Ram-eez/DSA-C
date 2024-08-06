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

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d", root->data);
        inOrder(root->right);
    }
}

struct node *search(struct node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    else if (root->data > key)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}

struct node *searchIterative(struct node *root, int key)
{
    while (root != NULL)
    {
        if (root->data == key)
        {
            return root;
        }
        else if (root->data > key)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return NULL;
}

void insert(struct node *root, int key)
{
    struct node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (root->data == key)
        {
            printf("Cannot insert %d, already in BST", key);
            return;
        }
        else if (root->data > key)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    // struct node *newNode = (struct node*)malloc(sizeof(struct node));
    // newNode->data = key;
    // newNode->left = NULL;
    // newNode->right = NULL;
    struct node *new = createNode(key);
    if (prev->data > key)
    {
        prev->left = new;
    }
    else
    {
        prev->right = new;
    }
}

int inOrderPost(struct node *root)
{
    struct node *temp = root;
    while (temp != NULL && temp->left!=NULL)
    {
        temp = temp->left;
    }
    return temp->data;
}

struct node *DeleteNode(struct node *root, int value)
{
    // search for the value

    if (root == NULL)
    {
        return (NULL);
    }

    if (root->data > value)
    {
        root->left = DeleteNode(root->left, value);
    }
    else if (root->data < value)
    {
       root->right = DeleteNode(root->right, value);
    }
    else
    {
        // case 1
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            return (NULL);
        }
        // case 2
        else if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        // case 3
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        // case 4
        else
        {
            int iPost = inOrderPost(root->right);
            root->data = iPost;
            root->right = DeleteNode(root->right, iPost);
        }
    }
    return root;
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

    struct node *n = search(root, 9);

    if (n == NULL)
    {
        printf("\nkey not found");
    }
    else
    {
        printf("\nfound : %d", n->data);
    }

    insert(root, 0);

    printf("\nIN Order is \n");

    root = DeleteNode(root,5);

    inOrder(root);

    return 0;
}