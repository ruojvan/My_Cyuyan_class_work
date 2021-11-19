#include <stdio.h>
#include <stdlib.h>

int Readscore(float score[])
{
    int n;
    for(n=0; ;n++)
    {
        printf("Input the %d th number :\n",n+1);
        scanf("%f",&score[n]);
        if(score[n]<0)
            break;
    }
    return n;
}

float Average(float score[],int n)
{
    float sum=0.0;
    int i=0;
    for(;i<n;i++)
    {
        sum+=score[i];
    }
    return (float)sum/(float)n;
}

int Highscore(float score[],float average,int n)
{
    int i=0,count=0;
    for(;i<n;i++)
    {
        if(score[i]>average)
            count++;
    }
    return count;
}

int main()
{
    float score[41];
    int n=Readscore(score);
    float aver=Average(score,n);
    printf("the number of students get high score is %d\n",Highscore(score,aver,n));
    return 0;
}
