#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
}*TOS = NULL;

void LLtraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d \n", ptr->data);
        ptr = ptr->next;
    }
}

void Push(int data){
    struct node *element = (struct node *)malloc(sizeof(struct node));
    if (element == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    element->data = data;
    element->next = TOS;
    TOS = element;
}

int Pop(){
    if (TOS==NULL){
        pritnf("Stack Underflow");
        return -1;
    }
    int temp;
    temp = TOS->data;
    struct node *p = TOS;
    TOS = TOS -> next;
    free(p);
    
    return(temp);
    
}

void TopElementOfStack(){
    printf("%d is the top element of the stack ", TOS->data);
}

void IsEmpty(){
    if (TOS== NULL) {
        printf("Stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }
}


int main(){
    int popped_data;
    IsEmpty();
    Push(10);
    Push(30);
    popped_data = Pop();
    Push(40);
    Push(2);
    LLtraversal(TOS);
    printf("%d was poppped \n", popped_data );
    TopElementOfStack();
    return 0;
}