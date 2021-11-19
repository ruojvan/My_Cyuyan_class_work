#include <stdio.h>
#include <stdlib.h>
#include "C.8.2.2.h"

int main()
{
    long f[1000];
    int n=16;
    Fib(f,n);
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d:%ld\n",i,f[i]);
    }
    return 0;
}
