#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a[6]= {0,0,0,0,0,0};
    for(i=0; i<6000; i++)
    {
        switch(rand()%6)
        {
        case 0:
        {
            a[0]++;
            break;
        }
        case 1:
        {
            a[1]++;
            break;
        }
        case 2:
        {
            a[2]++;
            break;
        }
        case 3:
        {
            a[3]++;
            break;
        }
        case 4:
        {
            a[4]++;
            break;
        }
        case 5:
        {
            a[5]++;
            break;
        }
        }
    }
    for(i=0; i<6; i++)
    {
        printf("%d:\t%.4f%%\n",i+1,(float)a[i]/60.0);
    }
    return 0;
}
