#include <stdio.h>
#include <stdlib.h>


int factorial(int number) {
    if (number == 1 || number == 0) {
        return 1;
    } else {
        return (number * factorial(number-1));
    }
}


void main(){
    int num; 
    int rfact;
    printf("Enter the number you want a factorial of:");
    scanf("%d",&num);

    printf("factorial using iterative solution \n");
    int ifact = 1;
    for (int i = 1; i<=num ; i++){
        ifact = ifact * i ;
    }
    printf("%d \n", ifact);

    printf("Factorial using recursion : \n");

    rfact = factorial(num);

    printf("%d", rfact);

}