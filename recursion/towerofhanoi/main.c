#include <stdio.h>
#include <stdlib.h>




void towerOfHanoi(int n, char source, char destination, char auxiliary)
{
    if (n == 1)
    {
        printf("Move disk 1 from rod %c to rod %c\n", source, destination);
        return;
    }
    towerOfHanoi(n-1, source, auxiliary,destination);
    printf("Move disk %d from rod %c to rod %c\n", n, source, destination);
    towerOfHanoi(n-1, auxiliary, destination, source);
}
    int main()
    {
        int n;
        printf("Enter the number of disks: \n");
        scanf("%d", &n);

        towerOfHanoi(n, 'S','A','D');


    }