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
    long long int i,n,sum=0;
    printf("Input i:(1<=i<=20)\n");
    scanf("%lld",&i);
    for(n=1; n<=i; n++)
        sum+=Fact(n);
    printf("%lld\n",sum);
    return 0;
}
