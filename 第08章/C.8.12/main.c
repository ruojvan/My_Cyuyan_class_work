#include <stdio.h>
#include <stdlib.h>


int Fun(int n)
{
    if(n<1)
        return 0;
    else if(n==1)
        return 1;
    else if(n==2)
        return 2;
    else if(n>2)
    {
        int i;
        i=Fun(n-1)+Fun(n-2);
        return i;
    }
}



int main()
{
    int n;

    printf("Input n:\n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        printf("\t%d\t\t%d\n",i,Fun(i));
    }
    return 0;
}
