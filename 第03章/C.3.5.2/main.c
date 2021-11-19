#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float PI=3.1415;
    float r;
    printf("Please input r:\n");
    scanf("%f",&r);
    printf("area=%f\n",r*r*PI*4.0);
    printf("V=%f\n",r*r*r*PI*3.0/4.0);
    return 0;
}
