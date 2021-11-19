#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,n;
    scanf("%d",&n);
    if(n<0)
        n=-n;
    a=n%10;
    b=((n-a)/10)%10;
    c=((n-a-10*b)/100)%10;
    printf("%d\n",a*100+b*10+c);
    return 0;
}
