#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ten,five,one;
    for(ten=1; ten<10; ten++)
        for(five=1; five<20; five++)
            for(one=1; one<100; one++)
                if((ten+five+one==50)&&(ten*10+five*5+one==100))
                    printf("ten:%d,five:%d,one:%d\n",ten,five,one);
    return 0;
}
