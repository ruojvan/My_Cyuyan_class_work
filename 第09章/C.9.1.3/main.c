#include <stdio.h>
#include <stdlib.h>

void Swap(int *x,int *y)
{
    int *ptemp;
    ptemp=x;
    x=y;
    y=ptemp;
    printf("\n\n");
}

int main()
{
    int x=6,y=8;
    printf("x=%d,y=%d\n",x,y);
    printf("&x=%d,&y=%d\n",(int)&x,(int)&y);
    Swap(&x,&y);
    printf("x=%d,y=%d\n",x,y);
    printf("&x=%d,&y=%d\n",(int)&x,(int)&y);
    return 0;
}
