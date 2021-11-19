
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n=1,count=1;
    double x;
    double sum,term;
    printf("Input x:\n");
    scanf("%lf",&x);
    sum=x;
    term=x;
    do{
        term=(-1)*term*x*x/(float)(n+1)/(float)(n+2);
        sum=sum+term;
        n=n+2;
        count=-count;
        printf("term=%lf,sum=%lf,n=%d,count=%d\n",term,sum,n,count);
    }while(((count)*term)>=0.00001);
    printf("sin(x)=%lf,count=%d\n",sum,count);
    return 0;
}
