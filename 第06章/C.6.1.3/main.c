#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k=4,n;
    for(n=0; n<k; n++)
    {
        if(n%2==0)
            break;
        k--;
    }
    printf("k=%d,n=%d\n",k,n);
    return 0;
}
