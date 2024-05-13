#include <stdio.h>

int main(){
    int array[100]; 
    int sizeArr, i, value, pos;

    printf("Enter the size of the array: ");
    scanf("%d", &sizeArr);

    printf("Enter the elements of the array: ");
    for(i=0 ; i<sizeArr ; i++){
        printf("Enter element %d :", i+1);
        scanf("%d", &array[i]);
    }

    printf("Enter the location where you want to insert an element :");
    scanf("%d",&pos);

    printf("Enter the value to insert :");
    scanf("%d",&value);

    sizeArr++;

    for(i=sizeArr-1; i>=pos-1 ; i--){
        array[i+1]=array[i];
    }
    array[pos-1] = value;

    printf("Array after insertion: ");
    for (i = 0; i < sizeArr; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    0[array] = 1;
     for (i = 0; i < sizeArr; i++){
        printf("%d ", array[i]);
    }
}
