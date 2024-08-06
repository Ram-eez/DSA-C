#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*front = NULL, *rear = NULL;

void LLtraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d \n", ptr->data);
        ptr = ptr->next;
    }
}

void Enqueue(int value)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));

    n->data = value;
    n->next = NULL;
    if (front == NULL)
    {
        front = rear = n;
    }
    else
    {
        rear->next = n;
        rear = n;
    }
}

int Dequeue()
{
    int value;
    struct node *q = front;

    if(front==NULL){
        printf("Queue is Empty\n");
        return;
    }
    else{
        front = front->next;
        value = q->data;
        free(q);
    }
    return value;
}



int main()
{
    Enqueue(1);
    Dequeue();
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);

    Dequeue();
    Dequeue();
    Enqueue(6);



    LLtraversal(front);

    return 0;
}