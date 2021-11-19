#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n=1.0,term=1.0,sum=1.0;
    while((1.0/term)>=0.00001)
    {
        sum=sum+1.0/term;
        n++;
        term*=n;
    }
    printf("e=%lf\n",sum);
    return 0;
}
