#include <stdio.h>
#include <stdlib.h>

int main()
{
    long i;
    long term,sum=0;
    for(i=1; i<=99; i=i+2)
    {
        term=i*(i+1)*(i+2);
        sum=sum+term;
    }
    printf("sum=%ld\n",sum);
    return 0;
}
