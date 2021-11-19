#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;
    int score;
    printf("Please input score :\n");
    scanf("%d",&score);
    printf("The grade is %c !\n",(score>=70)?((score>=80)?((score>=90)?'A':'B'):'C'):((score>=60)?'D':'E'));
    return 0;
}
