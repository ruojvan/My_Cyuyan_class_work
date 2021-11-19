#include <stdio.h>
#include <stdlib.h>

int PositiveNum(int a[],int n)
{
    int i,count=0;
    for(i=0; i<n; i++)
        if(a[i]>0)
            count++;
    return count-1;
}

int main()
{
    int a[1000],n=0;
    for( ; scanf("%d",&a[n])!=EOF ;)
    {
        getchar();
        n++;
    }
    printf("%d\n",PositiveNum(a,n+1));
    return 0;
}
