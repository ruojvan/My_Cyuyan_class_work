#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year,flag;
    printf("Enter year :\n");
    scanf("%d",&year);
    if(((year%4==0)&&(year%100!=0))||(year%400==0))
        flag=1;
    else
        flag=0;
    if(flag)
        printf("%d is a leap year !\n",year);
    else
        printf("%d is not a leap year !\n",year);
    return 0;
}
