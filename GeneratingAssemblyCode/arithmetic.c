#include <stdio.h>

long arith (long x, long y, long z)
{
    long t1 = x+y;
    long t2 = z+t1;
    long t3 = x+4;
    long t4 = y*48;
    long t5 = t3*t4;
    long rval = t2*5;
    return rval;
}