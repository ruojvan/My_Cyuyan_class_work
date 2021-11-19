#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Divarry(int *pArry,int n)
{
    int i;
    for(i=1; i<n; i++) //修改错误，原处为for(i=0;i<n;i++)
    {
        pArry[i]/=pArry[0];
    }
}

int main()
{
    int a[10];
    srand((unsigned)time(NULL));
    int i;
    a[0]=rand()%3+1;
    for(i=1; i<10; i++)
    {
        a[i]=rand()%90+4;
    }
    for(i=0; i<10; i++)
    {
        printf("%d\t",a[i]);
    }
    Divarry(a,10);
    printf("\n\nAfter\n\n");
    for(i=0; i<10; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
