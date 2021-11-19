#include <stdio.h>
#include <stdlib.h>

int Isture(int year)
{
    if(((year%4==0)&&(year%100!=0))||(year%400==0))
        return 1;
    else
        return 0;
}

int Menu(void)
{
    printf("1.year/month/day -> yearDay\n");
    printf("2.yearDay -> year/month/day\n");
    printf("3.Exit\n");
    printf("Please enter your choice :\n");
    int i;
    scanf("%d",&i);
    return i;
}

int DayofYear(int year,int month,int day)
{
    int monthh[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
    int flag=Isture(year);
    int dayy=0;
    int i;
    for(i=0; i<month-1; i++)
    {
        dayy+=monthh[i];
    }

    if(month>2&&flag==1)
    {
        dayy++;
    }

    return dayy+=day;

}

void Fun1(void)
{
    int year,month,day;
    printf("Input year/month/day:\n");
    scanf("%d%*c%d%*c%d",&year,&month,&day);
    int dayyear=DayofYear(year,month,day);
    printf("The result is:\n");
    printf("%d/%d/%d -> %d\n\n\n",year,month,day,dayyear);
}

void MonthDay(int year,int yearDay,int *pMonth,int *pDay)
{
    int monthh[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
    int flag=Isture(year);
    if(flag==1)
    {
        monthh[1]++;
    }
    int i=0;
    for(; yearDay>monthh[i]; i++)
    {
        yearDay-=monthh[i];
    }
    *pDay=yearDay;
    *pMonth=i+1;

}

void Fun2(void)
{
    int year,yearday,month,day;
    printf("Input year/yearDay:\n");
    scanf("%d%*c%d",&year,&yearday);
    MonthDay(year,yearday,&month,&day);
    printf("The result is:\n");
    printf("%d -> %d/%d/%d\n\n\n",yearday,year,month,day);
}

int main()
{
    int i;
    for(i=Menu(); i!=3; i=Menu())
    {
        if(i==1)
        {
            Fun1();//功能1
        }
        else
        {
            Fun2();//功能2
        }
    }


    return 0;
}
