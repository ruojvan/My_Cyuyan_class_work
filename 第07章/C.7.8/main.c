#include <stdio.h>
#include <stdlib.h>

int work(int n)
{
    if(n%5==1)
        return (n-1)/5*4;
    return -1;
}

int flag(int n)
{
    for(int i=1; i<=5; i++)
    {
        n=work(n);
    }
    if(n>0)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    for(n=1;n<25500; n++)
    {
        if(flag(n))
            break;
    }
    printf("The number of bananas is %d.\n",n);

    return 0;
}
