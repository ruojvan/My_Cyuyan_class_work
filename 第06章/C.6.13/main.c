#include <stdio.h>
#include <stdlib.h>

int main()
{
    long i,sum=0;
    printf("Input i:\n");
    while((scanf("%ld",&i)!=EOF)&&(i!=0))
    {
        if(i>0)
            sum+=i;
        printf("Input i:\n");
    }
    printf("sum=%ld\n",sum);
    return 0;
}
