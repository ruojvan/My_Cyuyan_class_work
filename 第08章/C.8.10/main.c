#include <stdio.h>
#include <stdlib.h>

void Input(int a[101][101],int m,int n)
{
    int i,j;
    printf("Input matrix a:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Input matrix b:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            int k;
            scanf("%d",&k);
            a[i][j]+=k;
        }
    }
}

void Output(int a[101][101],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%6d",a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[101][101],m,n;

    printf("Input m,n:\n");
    scanf("%d%*c%d",&m,&n);
    Input(a,m,n);
    Output(a,m,n);


    return 0;
}
