#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Produce(int a[10])
{
    srand((unsigned)time(NULL));
    for(int i=0; i<10; i++)
    {
        a[i]=rand();
    }
}

int Findmax(int a[])
{
    int j=0,i=1;
    for( ; i<10; i++)
    {
        if(a[j]<a[i])
            j=i;
    }
    return j;
}

int Findmin(int a[])
{
    int j=0,i=1;
    for( ; i<10; i++)
    {
        if(a[j]>a[i])
            j=i;
    }
    return j;
}

void Swap(int a[],int max,int min)
{
    int temp;
    printf("\nThe max pox is %d\t the number is %d\n",max+1,a[max]);
    printf("\nThe min pox is %d\t the number is %d\n",min+1,a[min]);
    temp=a[max];
    a[max]=a[min];
    a[min]=temp;
}
void Display(int a[])
{
    for(int i=0; i<10; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}

int main()
{
    int a[10];
    Produce(a);

    int max,min;
    max=Findmax(a);
    min=Findmin(a);


    printf("Before swap :\n");
    Display(a);

    Swap(a,max,min);


    printf("\n\nAfter swap :\n");
    Display(a);
    return 0;
}
