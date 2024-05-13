#include <stdio.h>
int main()
{
    int a[50];
    int size;
    int i;
    printf("enter size of array : ");
    scanf("%d", &size);
    printf("enter the elements of array");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("elements of array are");
    for (i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}