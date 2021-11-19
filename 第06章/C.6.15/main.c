#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rabbit;
    for(rabbit=0; rabbit<=98; rabbit++)
        if((rabbit*4+(98-rabbit)*2)==386)
            printf("rabbit=%d,chicken=%d\n",rabbit,98-rabbit);
    return 0;
}
