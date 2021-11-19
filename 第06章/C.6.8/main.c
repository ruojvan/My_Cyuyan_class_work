#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sum=0.0,flag=1.0,term=1.0;
    while(1.0/term>=0.00001)
    {
        sum=sum+1*flag/term;
        flag=-flag;
        term=term+2;
    }
    printf("PI=%f\n",sum*4.0);
    return 0;
}
