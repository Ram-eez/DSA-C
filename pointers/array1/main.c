#include <stdio.h>

int main(){
    int arr[50];
    int *pArr = arr;

    int i,n;

    printf("enter the number of elements in the array :" );
    scanf("%d", &n);
    
    printf("enter the element in the array" );
    for (i = 0; i < n ; i++){
        scanf("%d", pArr+i);
    }
    

    for(i=0; i < n; i++) {
        printf("%d\n", *(pArr+i));
    }
}