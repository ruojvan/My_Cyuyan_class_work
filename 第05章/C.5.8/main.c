#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("Enter a char :\n");
    a=getchar();
    if(((int)a>=65)&&((int)a<=90))
        printf("The inputer char \'%c\' is an capital alphabet!\n",a);
    else
        if(((int)a>=97)&&((int)a<=122))
            printf("The inputer char \'%c\' is a lowercase alphabet!\n",a);
        else
            if(((int)a>=48)&&((int)a<=57))
                printf("The inputer char \'%c\' is a number!\n",a);
            else
                if((int)a==32)
                    printf("The inputer char \'%c\' is a space symbol!\n",a);
                else
                    printf("The inputer char \'%c\' is an another symbol!\n",a);
    return 0;
}
