#include <stdio.h>
#include <stdlib.h>

float Find(float capital)
{
    float tax=1.0+0.01875*12;
    return capital/tax;
}

int main()
{
    float capital=0.0;
    for(int i=1; i<=5; i++)
    {
        capital=capital+1000.0;
        capital=Find(capital);
    }
    printf("He should pay %f money!\n",capital);
    return 0;
}
