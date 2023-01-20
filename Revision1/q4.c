#include <stdio.h>
#include <limits.h>
int main() 
{
    unsigned i = 1;
    int j = -4;
    printf("%u\n", i+j);
    unsigned k = UINT_MAX;
    printf("%u\n",k);
    printf("%d\n", i+j);
    printf("%d", sizeof(unsigned int)); //4 bytes
    return 0;
}