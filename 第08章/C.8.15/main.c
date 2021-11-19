#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Produce(int a[])
{
    srand((unsigned)time(NULL));
    int n=rand()%100;
    for(int i=0; i<n; i++)
    {
        a[i]=rand()%100;
    }
    return n;
}

void Bubble(int a[],int n)
{
    int i,j;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                int k;
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
}

int Insertion(int a[],int n)
{
    int i,b;
    printf("Input a number :\n");
    scanf("%d",&b);

    for(i=n-1; i>=0; i--)
    {
        if(b>a[i])
        {
            a[i+1]=b;
            break;
        }
        else
        {
            a[i+1]=a[i];
        }
    }
    n++;
    return n;
}

void Display(int a[],int n)
{
    int i=0;
    for( ; i<n; i++)
    {
        printf("%d:\t%d\n",i+1,a[i]);
    }
}

int main()
{
    int a[400];
    int n=Produce(a);
    Bubble(a,n);
    Display(a,n);
    printf("ENTER\n\n");
    n=Insertion(a,n);
    Display(a,n);



    return 0;
}
