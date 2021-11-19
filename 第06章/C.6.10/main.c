#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    for(n=100; n<1000; n++)
    {
        int a1,a2,a3;
        a1=n%10;
        a2=(n-a1)/10%10;
        a3=(n-a1-a2*10)/100%10;
        if(a1*a1*a1+a2*a2*a2+a3*a3*a3==n)
            printf("%d\n",n);
    }
    return 0;
}
