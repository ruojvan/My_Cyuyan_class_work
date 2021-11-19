#include <stdio.h>
#include <stdlib.h>

int main()
{
    float capital,a[10];
    a[1]=0.0225;
    a[2]=0.0243;
    a[3]=0.027;
    a[5]=0.0288;
    a[8]=0.03;
    int year;
    printf("Please input capital and store years :\n");
    scanf("%f%*c%d",&capital,&year);
    if((year==1)||(year==2)||(year==3)||(year==5)||(year==8))
    {
        printf("The final money is %f.\n",capital+capital*a[year]*(float)year);
    }
    else
        printf("The store year is invalid !\n");
    return 0;
}
