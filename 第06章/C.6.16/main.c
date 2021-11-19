#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cock,hen,chick;
    for(cock=0; cock<21; cock++)
        for(hen=0; hen<34; hen++)
            for(chick=0; chick<=100; chick++)
                if((cock*5+hen*3+chick==100)&&(cock+hen+chick*3==100))
                    printf("cock:%d,hen:%d,chick:%d\n",cock,hen,chick*3);
    return 0;
}
