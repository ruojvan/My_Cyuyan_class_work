#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Produce(int a[],int b[],int n)
{
    srand((unsigned)time(NULL));
    int i;
    for(i=0;i<n;i++)
    {
        a[i]=rand()%33+2;
    }
    for(i=0;i<n;i++)
    {
        b[i]=rand()%44+5;
    }
}

void Swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a[130],b[130],n;
    srand((unsigned)time(NULL));
    n=rand()%100+9;
    Produce(a,b,n);
    printf("After swap:\n");
    printf("a:\t");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nb:\t");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }




    for(int i=0;i<n;i++)
    {
        Swap(a+i,b+i);
    }


    printf("\n\nBefore swap:\n");
    printf("a:");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nb:");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }
    return 0;
}
