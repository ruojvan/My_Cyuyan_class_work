#include <stdio.h>
#include <stdlib.h>

void Swap(int *x,int *y)
{
    int *ptemp;
    *ptemp=*x;
    *x=*y;
    *y=*ptemp;
    printf("\n\n");
}

int main()
{
    int x=6,y=8;
    int *a=&x,*b=&y;
    printf("x=%d,y=%d\n",x,y);
    printf("*a=%d,*b=%d\n",*a,*b);
    Swap(a,b);
    printf("x=%d,y=%d\n",x,y);
    printf("*a=%d,*b=%d\n",*a,*b);
    return 0;
}
