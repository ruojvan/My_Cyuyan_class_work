#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i=1; i<=9; i++)
        printf("%d\t",i);
    printf("\n\n");
    for(i=1; i<=9; i++)
        printf("-\t");
    printf("\n\n");
    for(i=1; i<=9; i++)
    {
        for(j=1; j<i; j++)
            printf(" \t");
        for(j=i; j<=9; j++)
            printf("%d\t",i*j);
        printf("\n\n");
    }
    return 0;
}
