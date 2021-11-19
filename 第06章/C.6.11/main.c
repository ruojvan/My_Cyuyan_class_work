#include <stdio.h>
#include <stdlib.h>

int main()
{
    long n,sum=0,term=1,m;
    printf("Input n:\n");
    scanf("%ld",&n);
    for(m=1; sum<n; m++)
    {
        if(m-1)
            printf("m=%ld\n",m-1);
        term=term*m;
        sum=sum+term;
    }
    return 0;
}
