#include <stdio.h>
#include <stdlib.h>

int Max(int a,int b)
{
    if(a>b)
        return a;
    return b;
}

int main()
{
    int a,b;
    printf("Input a,b:\n");
    scanf("%d%*c%d",&a,&b);
    printf("The maximum number is %d\n",Max(a,b));
    return 0;
}
