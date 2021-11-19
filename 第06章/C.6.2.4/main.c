#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n=1;
    float term=1.0,sign=1,sum=0;
    while(1.0/(float)n>=0.0001)
    {
        term=1.0/(float)n*sign;
        sum=sum+term;
        sign=-sign;
        n++;
    }
    printf("sum=%f\n",sum);
    return 0;
}
