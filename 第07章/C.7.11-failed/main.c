#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern int goal;

int Deplay()//抛硬币决定谁先开始
{
    srand(time(NULL));
    return rand()%2;
}

void Two(goal)
{
    printf("%d %d\n",goal+1,goal+2);
    goal+=2;
}

void One(goal)
{
    printf("%d\n",goal+1);
    goal++;
}

int Game(goal)
{
    printf("How many numbers do you call?(1/2)\n");
    int a;
    scanf("%d",&a);
    printf("You called %d number(s):",a);
    if(a==1)
        One(goal);
    else
        Two(goal);
}

int Computer(int n)
{
    switch((30-n)%3)
    {
    case 0:
        {
            srand(time(NULL));
            if(rand()%2)
;
        }
    }


}



int main()
{


    printf("%d\n",rand());
    return 0;
}
