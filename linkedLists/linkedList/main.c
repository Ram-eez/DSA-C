#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int LLtraversal(struct node *ptr)
{
    int count =0;
    while (ptr != NULL)
    {
        printf("Element : %d \n", ptr->data);
        ptr = ptr->next;
        count++;
    }
    return count;
}

int main()
{

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 66;
    third->next = fourth;

    fourth->data = 34;
    fourth->next = NULL;

    int count = LLtraversal(head);
    printf("%d\n", count);
    return 0;
}