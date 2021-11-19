#include <stdio.h>
#include <stdlib.h>

int Flag(int year)
{
    if(((year%4==0)&&(year%100!=0))||(year%400==0))
        return 1;
    else
        return 0;
}

int main()
{
    int year,month;
    printf("Please input year.month :\n");
    scanf("%d%*c%d",&year,&month);
    if((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12))
        printf("The days of %d.%d has 31!\n",year,month);
    else
        if(month==2)
            printf("The days of %d.%d has %d!\n",year,month,(Flag(year))?(29):(28));
        else
            printf("The days of %d.%d has 30!\n",year,month);
    return 0;
}
