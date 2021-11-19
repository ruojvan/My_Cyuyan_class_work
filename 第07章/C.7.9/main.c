#include <stdio.h>
#include <stdlib.h>

int Fact(int n,int number)
{
    if(number==1)
        return n;
    else
        return Fact(n+2,number-1);

}

int main()
{
    printf("The fifth person's age is %d\n",Fact(10,5));
    return 0;
}
