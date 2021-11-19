#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf("Please input a number :\n");
    scanf("%f",&a);
    if(a<0)
        a=-a;
    printf("The abs of number is : %f\n",a);
    return 0;
}
