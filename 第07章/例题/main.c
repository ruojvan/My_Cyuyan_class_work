#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "guess.h"

int main(void)
{
    int number;
    char reply;
    srand(time(NULL));
    do
    {
        number=MakeNumber();
        GuessNumber(number);
        printf("Do you want to continue (Y/N or y/n)?\n");
        scanf("%c",&reply);
    }
    while(reply=='y'||reply=='Y');
    return 0;
}

