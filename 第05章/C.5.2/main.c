#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Please input a number :\n");
    scanf("%d",&n);
    if(n%2==1)
        printf("number %d is an odd number.\n",n);
    else
        printf("number %d is an even number.\n",n);
    return 0;
}
