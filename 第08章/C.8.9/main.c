#include <stdio.h>
#include <stdlib.h>

int Input(int a[],int b[])
{
    int n;
    printf("Input the size of matrix :\n");
    scanf("%d",&n);
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&k);
            if(i==j)
                a[i]=k;
            if((i+j)==(n-1))
                b[i]=k;
        }
    }
    return n;
}


int main()
{
    int a[101],b[101];
    int n=Input(a,b);
    int i,sum1=0,sum2=0;
    for(i=0;i<n;i++)
    {
        sum1+=a[i];
        sum2+=b[i];
    }

    printf("the main sum is %d\n",sum1);
    printf("the secondary sum is %d\n",sum2);

    return 0;
}
