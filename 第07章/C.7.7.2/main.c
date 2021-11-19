#include <stdio.h>
#include <stdlib.h>

int Gcd(int a,int b)
{
    int r;
    r=a%b;
    if(r!=0)
        return Gcd(b,r);
    return b;
}

int main()
{
    int a,b;
    printf("Input two numbers a,b:\n");
    scanf("%d%*c%d",&a,&b);
    printf("The greatest common divisor is %d\n",Gcd(a,b));
    return 0;
}
