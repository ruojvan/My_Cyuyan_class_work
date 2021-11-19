#include <stdio.h>
#include <stdlib.h>

int main()
{
    double i=0.0;
    for( ; i<=300; i=i+10)
        printf("F:%.0lf\tC:%.3lf\n",i,5.0/9.0*(i-32.0));
    return 0;
}
