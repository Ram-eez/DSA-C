#include <stdio.h>

int main(){
    int i, j=0;

    for(i=1; i<=10 ;i++){
        j= j+i;
    }
    printf("The sum of first 10 numbers are: %d",j);

    return 0;
}