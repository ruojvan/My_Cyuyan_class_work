#include <stdio.h>
#include <stdlib.h>

int Number(int n)
{
    int a,b,c;
    for(a=1; a<10; a++)
        for(b=0; b<10; b++)
            for(c=0; c<10; c++)
                if(n==(a+2*b+2*c)*100+(a*2+b+c*2)*10+a*2+b*2+c)
                    return a*100+b*10+c;
    return -1;
}

int main()
{
    int n;
    printf("Input n :\n");
    scanf("%d",&n);
    if(Number(n)==-1)
        printf("error number!\n");
    else
        printf("the number is %d\n",Number(n));
    return 0;
}
