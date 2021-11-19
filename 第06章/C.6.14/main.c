#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int man,woman,children;
    for(man=0; man<=30; man++)
        for(woman=0; woman<=30; woman++)
            for(children=0; children<=30; children++)
                if((man*3+woman*2+children==50)&&(woman+man+children==30))
                    printf("man=%ld,woman=%ld,children=%ld\n",man,woman,children);
    return 0;
}
