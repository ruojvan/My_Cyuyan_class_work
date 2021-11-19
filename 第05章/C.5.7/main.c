#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("Please input a char :\n");
    a=getchar();
    if(((int)a>=65)&&((int)a<=90))
    {
        printf("The inputed char \'%c\' is a capital alphabet!\n",a);
        printf("The transformational alphabet is %c \n",a+32);
        printf("The transformational number is %d \n",a+32);
    }
    else if(((int)a>=97)&&((int)a<=122))
    {
        printf("The inputed char \'%c\' is a lowercase alphabet!\n",a);
        printf("The transformational alphabet is %c \n",a-32);
        printf("The transformational number is %d \n",a-32);
    }
    else
    {
        printf("The inputed char \'%c\' is an another alphabet!\n",a);
        printf("The transformational number is %d \n",a);
    }
    return 0;
}
