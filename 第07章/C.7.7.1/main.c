#include <stdio.h>
#include <stdlib.h>

long long int Gcd(long long int a,long long int b)
{
    long long int n;
    n=(a>b)?b:a;
    for( ; ; n--)
        if(a%n==0&&b%n==0)
            return n;
}


int main()
{
    long long int a,b;
    printf("Input two number a,b:\n");
    scanf("%lld%*c%lld",&a,&b);
    printf("%lld\n",Gcd(a,b));
    return 0;
}
