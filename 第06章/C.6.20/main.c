#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    for(n=30; n<100; n++)
        if((n*n>=1000)&&(n*n/1000==n*n/100%10)&&(n*n%10==n*n/10%10)&&(n*n/1000!=n*n%10))
            printf("The car number is %d\n",n*n);
    return 0;
}
