#include <stdio.h>
#include <stdlib.h>

void Func(int x)
{
    x=20;
}

int main()
{
    int x=10;
    Func(x);
    printf("%d\n",x);

    return 0;
}
