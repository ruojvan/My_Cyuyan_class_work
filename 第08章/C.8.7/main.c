#include <stdio.h>
#include <stdlib.h>



int main()
{
    int a[40];
    printf("Input 40 students' scores :\n");
    int i;
    for(i=0;i<40;i++)
    {
        printf("Input the %d th student's score :\n",i+1);
        scanf("%d",&a[i]);
    }
    int j;
    printf("Grade\tCount\tHistogram\n");
    for(i=0;i<40;i++)
    {
        printf("%d\t%d\t",i+1,a[i]);
        for(j=0;j<a[i];j++)
            printf("*");
        printf("\n");
    }


    return 0;
}
