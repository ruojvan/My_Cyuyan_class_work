#include <stdio.h>
#include <stdlib.h>

int main()
{
    long i,n;
    printf("Input n:\n");
    scanf("%ld",&n);
    for(i=1; i<=n; i++)
        printf("%ld\t%ld\n",i*i,i*i*i);
    return 0;
}
