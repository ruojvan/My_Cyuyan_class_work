#include <stdio.h>
#include <stdlib.h>

int Square(int i)
{
    return i*i;
}

int main()
{
    int i=0;
    i=Square(i);
    for( ; i<3; i++)
    {
        static int i=1;
        i+=Square(i);
        printf("%d\n",i);
    }
    printf("%d\n",i);
    return 0;
}
