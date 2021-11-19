#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t,w,h;
    printf("Please input the weight (kg) and height (m) :\n");
    scanf("%f%*c%f",&w,&h);
    t=w/h/h;
    printf("The weight is %s !\n",(t>=25)?((t>=27)?("over fat"):("fat")):((t>=18)?("normal height"):("over thin")));
    return 0;
}
