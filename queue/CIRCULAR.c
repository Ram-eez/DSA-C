#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*front = NULL, *rear = NULL;

void LLtraversal(struct node *ptr)
{
    while (ptr != front)
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
        rear->next = front;
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

    value = front->data;
    
    if (front == rear){
        front = rear = NULL;
    }
    else{
        front = front->next;
        rear->next = front;
    }
    free(q);
    return value;
}



int main()
{
    int deq;
    Enqueue(1);
    Dequeue();
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);

    deq = Dequeue();
    Enqueue(6);

    printf("%d",deq);

    LLtraversal(front);

    return 0;
}