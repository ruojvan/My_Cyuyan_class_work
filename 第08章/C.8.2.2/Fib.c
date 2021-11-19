#include <stdio.h>
#include <stdlib.h>

void Fib(long f[],int n)
{
    int i;
    f[0]=0;
    f[1]=1;
    for(i=2;i<n;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
}
