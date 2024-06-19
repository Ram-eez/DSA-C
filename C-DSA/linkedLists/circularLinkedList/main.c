#include <stdio.h> 
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

void LLtraversal(struct node *head) {
    struct node *ptr = head;
    do{
        printf("%d \n",ptr->data);
        ptr = ptr->next;
    }while(ptr!=head);  
}

struct node *InsertionAtStart(struct node *head, int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    struct node *p = head->next;
    while(p->next != head){
        p = p->next;
    }

    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

int main(){

    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = head;

    head = InsertionAtStart(head, 80);
    LLtraversal(head);
    return 0;
}