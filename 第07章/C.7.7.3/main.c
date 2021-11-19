#include <stdio.h>
#include <stdlib.h>

int Gcd(int a,int b)
{
    if(a==b)
        return a;
    if(a>b)
        return Gcd((a-b),b);
    return Gcd(a,(b-a));
}

int main()
{
    int a,b;
    printf("Input two numbers a,b:\n");
    scanf("%d%*c%d",&a,&b);
    printf("The greatest common divisor is %d\n",Gcd(a,b));
    return 0;
}
