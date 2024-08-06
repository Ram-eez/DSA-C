#include <stdio.h>

int main(){
    int array[100]; 
    int sizeArr, i, pos;

    printf("Enter the size of the array: ");
    scanf("%d", &sizeArr);

    printf("Enter the elements of the array: ");
    for(i=0 ; i<sizeArr ; i++){
        printf("Enter element %d :", i+1);
        scanf("%d", &array[i]);
    }

    printf("Enter the index where you want to delete an element :");
    scanf("%d",&pos);

    if(pos>=sizeArr+1){
        printf("Cannot delete");
    } else {
    for(i=pos; i<sizeArr-1 ; i++){
        array[i]=array[i+1];
        
    }
    }
    sizeArr--;
   
    printf("Array after deletion: ");
    for (i = 0; i < sizeArr; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}
