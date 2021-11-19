#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    char space=' ';
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c",space);
        }
        for(k=1; k<=6; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
