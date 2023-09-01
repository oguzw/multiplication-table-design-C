#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{

    printf("%4c",'I');
    int i,j;
    for(i=1;i<=SIZE;i++)
    {
        printf("%4d",i);
    }
    printf("\n");
    for(i=1;i<=SIZE;i++)
    {
        printf("_____");
    }
    printf("\n");
    for(i=1;i<=SIZE;i++)
    {
        printf("%4d",i);
        for(j=1;j<=SIZE;j++)
        {
            printf("%4d",i*j);
        }
        printf("\n");
    }


    return 0;
}
