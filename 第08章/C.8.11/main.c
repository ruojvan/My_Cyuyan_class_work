#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[100][100];
    a[0][0]=1;
    a[1][0]=1;
    a[1][1]=1;

    printf("Input n:\n");
    scanf("%d",&n);

    int i,j;
    for(i=2; i<n; i++)
    {
        a[i][0]=1;
        a[i][i]=1;
        for(j=1; j<i; j++)
        {
            a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }


    return 0;
}
