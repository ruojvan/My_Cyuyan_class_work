#include <stdio.h>
#include <stdlib.h>

int main()
{
    double rate,capital,deposit;
    int n,i;
    rate=0.0225;
    printf("Please input capital:\n");
    scanf("%lf",&capital);
    printf("Please input years:\n");
    scanf("%d",&n);
    deposit=capital;
    for(i=1;i<=n;i++)
    {
        deposit=deposit*(1+rate);
    }
    printf("The final deposit is : %lf\n",deposit);


    return 0;
}
