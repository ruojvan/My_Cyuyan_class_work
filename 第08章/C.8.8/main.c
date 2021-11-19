#include <stdio.h>
#include <stdlib.h>

float Mean(float a[],int n)
{
    float sum=0;
    int i=0;
    for(;i<n;i++)
    {
        sum+=a[i];
    }
    return (float)sum/(float)n;
}

float Median(float a[],int n)
{

    if(n%2==0)
    {
        return (a[(n/2)-1]+a[n/2])/2.0;
    }
    else
        return a[((n+1)/2)-1];
}

float Mode(float a[],int n)
{
    float mode=a[0],mode2;
    int i=1,count=1,count2;
    for(;i<n;i++)
    {
        if(a[i]==mode)
            count++;
    }
    for(i=1;i<n;i++)
    {
        int j;
        mode2=a[i];
        count2=0;
        for(j=i+1;j<n;j++)
        {
            if(a[j]==mode2)
            {
                count2++;
            }
        }
        if(count2>count)
        {
            mode=mode2;
            count=count2;
        }
    }
    return mode;
}

int main()
{
    float feedback[41];
    int i=0;
    for(;;i++)
    {
        printf("Input the %d th feedback:\n",i+1);
        scanf("%f",&feedback[i]);
        if(feedback[i]<0)
            break;
    }

    float mean=Mean(feedback,i),median=Median(feedback,i),mode=Mode(feedback,i);
    printf("mean:%f\nmedain:%f\nmode:%f\n%d",mean,median,mode,i);

    return 0;
}
