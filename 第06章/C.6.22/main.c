#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int i,sum=0,term=1,count=0,number=0;
    double rice;
    for(i=1; i<=64; i++)
    {
        sum+=term;
        term*=2;
        while(sum>10&&sum%10==0)
        {
            count++;
            if(count==8)
            {
                count=0;
                number++;
            }
            sum=sum/10;
        }
    }

    rice=(double)(sum)/1.42;
    printf("The king need %lf m3 rice.\n",rice*(double)number);
    return 0;
}
