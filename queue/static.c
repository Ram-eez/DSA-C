#include <stdio.h>
#include <stdlib.h>
#define max 5

int queue[max];

int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (rear == max - 1)
    {
        printf("queue is full");
        return;
    }
    else if (rear == -1 && front == -1)
    {
        rear++;
        front++;
        queue[rear] = value;
    }
    else
    {
        rear++;
        queue[rear] = value;
    }
}

int dequeue()
{
    int value;

    value = queue[front];

    if (rear == -1 && front == -1)
    {
        printf("queue is empty");
        return -1;
    }
    else if (rear == front)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }

    return value;
}

void display()
{
    for (int i = front; i <= rear; i++)
    {
        printf("%d\n", queue[i]);
    }
}

int main()
{
    int dq;
    enqueue(10);
    enqueue(12);
    enqueue(14);
    enqueue(16);

    dq = dequeue();
    display();
}
