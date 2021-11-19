#include <stdio.h>
#include <stdlib.h>

int Findmax(int a[])
{
    int n=0,max=a[0];
    int i=1;
    for( ;i<10;i++)
    {
        if(a[i]>max)
        {
            n=i;
            max=a[i];
        }
    }
    return n;
}

int Findmin(int a[])
{
    int n=0,min=a[0];
    int i=0;
    for( ;i<10;i++)
    {
        if(a[i]<min)
        {
            n=i;
            min=a[i];
        }
    }
    return n;
}

void Swap(int a[],int maxpos,int minpos)
{
    int p;
    p=a[maxpos];
    a[maxpos]=a[minpos];
    a[minpos]=p;
}

int main()
{
    printf("Input 10 numbers :\n");
    int a[10];
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    int min=Findmin(a);
    int max=Findmax(a);

    Swap(a,max,min);


    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
