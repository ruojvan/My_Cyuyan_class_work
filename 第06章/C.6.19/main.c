#include <stdio.h>
#include <stdlib.h>

int main()
{
    long poor=1,rich=0,day;
    for(day=1; day<=30; day++)
    {
        poor*=2;
        rich+=10;
    }
    printf("Poor should pay %.2lf yuan.\n",(double)(poor-1)/100.0);
    printf("Rich should pay %ld yuan.\n",rich*10000);
    return 0;
}
