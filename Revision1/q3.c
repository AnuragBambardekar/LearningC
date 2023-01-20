#include <stdio.h>
int main() 
{
    char c = 255; //character can hold 8 bit = 255 is max
    c = c + 10; //after exceeding 8 bits, it obeys the law of arithmetic modulo
    // c = 265
    // so, 265/2^8 = 9 
    printf("%d", c);
    return 0;
}