#include <stdio.h>
#include <stdlib.h>

int main()
{
    double i,sum=0.0;
    do
    {
        printf("Input i :\n");
        scanf("%lf",&i);
        sum+=i;
    }
    while(i>0);
    printf("sum=%lf\n",sum-i);
    return 0;
}
