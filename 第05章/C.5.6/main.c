#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year,flag;
    printf("Enter year :\n");
    scanf("%d",&year);
    flag=(((year%4==0)&&(year%100!=0))||(year%400==0))?1:0;
    if(flag)
        printf("%d is a leap year!\n",year);
    else
        printf("%d is not a leap year!\n",year);
    return 0;
}
