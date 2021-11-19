#include <stdio.h>
#include <stdlib.h>

void Multiplication(int a[],int b[],int n,int longer)
{
    int i;
    for(i=1; i<=longer; i++)
    {
        b[i]=a[i]*n;
    }
}

int Judge(int a)
{
    int b=0,c=0,d=0,e=0,f=0,g=0,h=0;
    b=a%10;
    c=(a-b)/10%10;
    d=(a-b-c*10)/10%10;
    e=(a-b-c*10-d*100)/10%10;
    f=(a-b-c*10-d*100-e*1000)/10%10;
    g=(a-b-c*10-d*100-e*1000-f*10000)/10%10;
    h=(a-b-c*10-d*100-e*1000-f*10000-g*100000)/10%10;
    if(h!=0)
        return 6;
    else if(g!=0)
        return 5;
    else if(f!=0)
        return 4;
    else if(e!=0)
        return 3;
    else if(d!=0)
        return 2;
    else if(c!=0)
        return 1;
    else
        return 0;
}

int Clearr(int a[],int longer)
{

    for(int i=1; i<longer; i++)
    {
        a[i+1]+=(a[i]-(a[i]%10))/10;
        a[i]=a[i]%10;
    }
    longer+=Judge(a[longer]);
    for(int i=1; i<=longer; i++)
    {
        a[i+1]+=(a[i]-(a[i]%10))/10;
        a[i]=a[i]%10;
    }
    return longer;
}

int main()
{
    int a[40][100];
    a[0][0]=1;
    a[0][1]=1;

    for(int i=1; i<40; i++)
    {
        Multiplication(a[i-1],a[i],i+1,a[i-1][0]);
        a[i][0]=Clearr(a[i],a[i-1][0]);
    }


    for(int i=0; i<40; i++)
    {
        printf("%2d:%5d\t\t\t\t",i+1,a[i][0]);
        for(int j=a[i][0]; j>0; j--)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
