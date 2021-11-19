#include <stdio.h>
#include <stdlib.h>

int main()
{
    int time,count=0;
    for(time=0; time<=(7*21-1); time++)
        if((time%7==0)||(time%5==0)||(time%6==0))
            count++;
    printf("Count=%d\n",count);
    return 0;
}
