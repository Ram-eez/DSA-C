#include <stdio.h>
#include <stdlib.h>
#define max 5

int stack_arr[max];
int top=-1;

void push(int x){
    if(top == max-1){
        printf("Stack overflow");
        return;
    }
    top++;
    stack_arr[top] = x;
}

int pop(){
    if(top==-1){
        printf("Empty stack cant pop");
        return;
    }
    int temp;
    temp = stack_arr[top];
    top--;
    return temp;
    
}

void print(){
    int i;
    if(top==-1){
        printf("Empty stack cant display");
        return;
    }
    for(i = top ; i >= 0 ; i--){
        printf("%d ", stack_arr[i]);
    }
}

int isFull(){
    if(top=max-1){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int value;
    push(1);
    push(2);
    push(3);
    push(4);
    value = pop();
    printf("popped %d\n", value);
    print();
    
}