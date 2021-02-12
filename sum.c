/*
 * An application that illustrates calling the sum function defined elsewhere.
 */

#include <stdio.h>
#include <inttypes.h>

uint64_t sum(uint64_t n);

int main()
{

    printf("sum = %lu \n", sum(10));
    return 0;
}