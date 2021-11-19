#include <stdio.h>
#include <stdlib.h>

int hour,minute,second;

void Update()
{
    second++;
    if(second==60)
    {
        second=0;
        minute++;
    }
    if(minute==60)
    {
        minute=0;
        hour++;
    }
    if(hour==24)
        hour=0;
}

void Display()
{
    printf("%02d:%02d:%02d\n",hour,minute,second);
}

void Delay()
{
    int t=0;
    for( ; t<100000000; t++)
        ;
}

int main()
{
    int i;
    hour=minute=second=0;
    for(i=0; i<1000000; i++)
    {
        Update();
        Display();
        Delay();
    }
    return 0;
}
