#include <stdio.h>
#include <stdlib.h>

int main()
{
    long term=0,sum=0;
    int a,i,n;
    printf("Input a,n:\n");
    scanf("%d%*c%d",&a,&n);
    for(i=1; i<=n; i++)
    {
        term=term*10+a;
        sum=sum+term;
    }
    printf("sum=%ld\n",sum);
    return 0;
}
