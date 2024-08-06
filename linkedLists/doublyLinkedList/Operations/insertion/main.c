#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct node
{
    int data;
    struct node *next;
    struct node *prev;
} *head = NULL;

// Function to insert a node at the beginning
void insertAtBegin(int value)
{
    // Allocate memory for the new node
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->prev = NULL;

    if (head != NULL)
    {
        // Link the new node with the current head
        newNode->next = head;
        head->prev = newNode;
    }
    else
    {
        newNode->next = NULL;
    }
    // Update the head to the new node
    head = newNode;
}

void insertAtEnd(int value)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;

    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL)
    {
        newNode->prev = NULL;
        head = newNode;
    }
    else
    {
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = newNode;
        newNode->prev = p;
    }
}

void insertAtIndex(int value, int index)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    struct node *q = head->next;

    newNode->data = value;

    if (head == NULL)
    {
        newNode->next = NULL;
        newNode->prev = NULL;
    }

    else
    {

        int i = 0;
        while (i != index - 1)
        {
            p = p->next;
            q = q->next;
            i++;
        }

        newNode->next = q;
        q->prev = newNode;

        p->next = newNode;
        newNode->prev = p;
    }
}

// Function to traverse the list and print its elements
void LLtraversalForward(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d \n", ptr->data);
        ptr = ptr->next;
    }
}
void LLtraversalBackword()
{
    struct node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }

    while (p != NULL)
    {
        printf("Element : %d \n", p->data);
        p = p->prev;
    }
}

int main()
{
    // Insert nodes at the beginning
    insertAtBegin(50);
    insertAtBegin(40);
    insertAtBegin(30);
    insertAtBegin(20);
    insertAtBegin(10);

    insertAtEnd(60);
    insertAtEnd(100);

    insertAtIndex(70, 6);

    printf("Linked list  \n");

    // Traverse and print the list
    LLtraversalForward(head);
    printf("Linked list  \n");
    LLtraversalBackword();

    return 0;
}
