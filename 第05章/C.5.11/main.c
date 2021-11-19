#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sex,sports,diet;
    float faheight,moheight,height;
    printf("Please input father is height (cm) and mother is height (cm) :\n");
    scanf("%f%*c%f",&faheight,&moheight);
    printf("Please input sex (F/M): \n");
    scanf("%*c%c",&sex);
    height=(sex=='F')?(faheight*0.923+moheight)/2.0:(faheight+moheight)*0.54;
    printf("Is like sports ? (Y/N) \n");
    scanf("%*c%c",&sports);
    printf("Do you have a health diet ? (Y/N) \n");
    scanf("%*c%c",&diet);
    height=(sports=='Y')?(height*1.02):(height);
    height=(diet=='Y')?(height*1.015):(height);
    printf("The height is %f \n",height);
    return 0;
}
