#include <stdio.h>
#include <stdlib.h>

long long int Fact(long long int i)
{
    if(i==1)
        return 1;
    return i*Fact(i-1);
}

int main()
{
    long long int i,n;
    printf("Input a number i:\n");
    scanf("%lld",&i);
    for(n=1; n<=i; n++)
        printf("%3lld:%lld\n",n,Fact(n));
    return 0;
}
