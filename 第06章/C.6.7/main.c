#include <stdio.h>
#include <stdlib.h>

int main()
{
    float capital=100.0,tax;
    int i=0;
    printf("Input tax (%%) :\n");
    scanf("%f",&tax);
    tax=tax/100.0;
    for(; capital<200; i++)
    {
        capital=capital*(1.0+tax);
    }
    printf("Need %d years !\n",i);
    return 0;
}
