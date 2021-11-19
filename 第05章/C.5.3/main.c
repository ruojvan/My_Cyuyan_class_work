#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c,s,area;
    printf("Please input three numbers :\n");
    scanf("%f%*c%f%*c%f",&a,&b,&c);
    s=(a+b+c)/2.0;
    if((a+b>c)&&(a+c>b)&&(b+c>a))
    {
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("The area is %f.\n",area);
    }
    else
        printf("It is not a triangle!\n");
    return 0;
}
