#include <stdio.h>
#include <stdlib.h>

int Lowscore(float score[],int n)
{
    int i=0,count=0;
    for( ;i<n;i++)
    {
        if(score[i]<60)
            count++;
    }
    return count;
}

int main()
{
    float score[41];
    int n;
    printf("Input number of students: (n<40)\n");
    scanf("%d",&n);
    int i=0;
    for(;i<n;i++)
    {
        printf("Input the %d th student's score :\n",i+1);
        scanf("%f",&score[i]);
    }
    printf("The number of students that get a low score is %d\n",Lowscore(score,n));
    return 0;
}
