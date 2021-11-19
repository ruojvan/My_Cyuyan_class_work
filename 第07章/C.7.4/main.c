#include <stdio.h>
#include <stdlib.h>

int Lcm(int a,int b)
{
    int n;
    n=(a>b)?a:b;
    for( ; ; n++)
    {
        if((n%a==0)&&(n%b==0))
            return n;
    }
}

int main()
{
    int a,b;
    printf("Input two number a,b:\n");
    scanf("%d%*c%d",&a,&b);
    printf("The least common multiple is %d\n",Lcm(a,b));
    return 0;
}
