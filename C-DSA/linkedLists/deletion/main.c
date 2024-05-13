#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void LLtraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d \n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *DeleteFirstElement(struct node *head){
    struct node *ptr = head;
    head = head->next; 
    free(ptr);
    return head;
}

struct node *DeleteAtIndex(struct node *head, int index){
    struct node *p = head;
    struct node *q = head->next;
    
    int i=0;
    while(i != index - 1){
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    free(q);
    return head;

}

struct node *DeleteAtEnd(struct node *head){
    struct node *p = head;
    struct node *q = head->next;
    
    while(q->next != NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;

}

struct node *DeleteAfterValue(struct node *head, int value){
    struct node *p = head;
    struct node *q = head->next;
    while(q->data != value && q->next != NULL){
        p = p->next;
        q = q->next;
    }
    if(q->data == value){
        p->next = q->next;
        free(q);
    } else {
        printf("Element doesnt exist");  
    }
    return head;

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

    LLtraversal(head);

    printf("\n");

    //head = DeleteFirstElement(head);
    //head = DeleteAtIndex(head,2);
    // head = DeleteAtEnd(head);
    head = DeleteAfterValue(head,66);
    
    LLtraversal(head);
    return 0;
}