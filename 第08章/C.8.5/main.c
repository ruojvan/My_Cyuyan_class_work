#include <stdio.h>
#include <stdlib.h>

struct student
{
    float score;
    int number;
};

int Readscore(struct student st[])
{
    int i;
    for(i=0; ; i++)
    {
        printf("Input number ( the %d st people ) :\n",i+1);
        scanf("%d",&st[i].number);
        printf("Input score ( the %d st people ) :\n",i+1);
        scanf("%f",&st[i].score);
        if((st[i].number<0)||(st[i].score<0))
            break;
    }
    return i;
}

int Findmax(struct student st[],int num)
{
    int maxpos=0,maxscore=st[0].score;
    int i;
    for(i=1; i<num; i++)
    {
        if(st[i].score>maxscore)
        {
            maxpos=i;
            maxscore=st[i].score;
        }
    }
    return maxpos;
}

int main()
{
    struct student st[41];
    int num=Readscore(st);
    printf("the max score is %f\n",st[Findmax(st,num)].score);
    printf("the max student's number is %d\n",st[Findmax(st,num)].number);
    return 0;
}
