#include <stdio.h>
#include <stdlib.h>

int main()
{
    long a,b;
    double x,y;
    scanf("%ld%*c%ld",&a,&b);
    getchar();
    scanf("%lf%*c%lf",&x,&y);

    printf("a=%ld,b=%ld\n",a,b);
    printf("x=%lf,y=%lf\n",x,y);
    return 0;
}
