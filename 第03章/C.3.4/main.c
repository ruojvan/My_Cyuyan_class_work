#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c,delt;
    printf("Please input a,b,c:\n");
    scanf("%f,%f,%f",&a,&b,&c);
    delt=b*b-4*a*c;
    if(delt>0)
    {
        printf("x1=%f\n",(-1*b)/(2*a)+(sqrt(delt))/(2*a));
        printf("x2=%f\n",(-1*b)/(2*a)-(sqrt(delt))/(2*a));
    }
    if(delt==0)
    {
        printf("x1=x2=%f\n",(-1*b)/(2*a));
    }
    if(delt<0)
    {
        printf("There are no results !\n");
    }
    return 0;
}
