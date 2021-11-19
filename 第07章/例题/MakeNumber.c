#include <stdio.h>
#include <assert.h>
#include "MakeNumber.h"

int MakeNumber()
{
    int number;
    number=(rand()%(MAX_NUMBER-MIN_NUMBER+1))+MIN_NUMBER;
    assert(number>=MIN_NUMBER&&number<=MIN_NUMBER);
    return number;
}
