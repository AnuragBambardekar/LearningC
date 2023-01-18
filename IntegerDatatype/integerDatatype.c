#include <stdio.h>
#include <limits.h>

int main()
{
    printf("Size of Integer: %d bytes\n", sizeof(int));
    printf("Size of long Integer: %d bytes\n", sizeof(long int));
    printf("Size of short Integer: %d bytes\n", sizeof(short int));
    printf("Size of long long Integer: %d bytes\n", sizeof(long long int));
    printf("\n");

    //SIGNED & UNSIGNED INTEGERS
    int var1 = INT_MIN;
    int var2 = INT_MAX;
    printf("Range of signed Integer is: %d to %d \n", var1, var2);

    unsigned int var3 = 0; //since no Min value in limits.h
    unsigned int var4 = UINT_MAX;
    printf("Range of unsigned Integer is: %u to %u \n", var3, var4);
    printf("\n");

    //SIGNED & UNSIGNED SHORT INTEGERS
    short int var5 = SHRT_MIN;
    short int var6 = SHRT_MAX;
    printf("Range of signed short is: %d to %d \n", var5, var6);

    short unsigned int var7 = 0;
    short unsigned int var8 = USHRT_MAX;
    printf("Range of unsigned short is: %u to %u \n", var7, var8);
    printf("\n");

    //SIGNED & UNSIGNED LONG INTEGERS
    long int var9 = LONG_MIN;
    long int var10 = LONG_MAX;
    printf("Range of signed long is: %ld to %ld \n", var9, var10);

    long unsigned int var11 = 0;
    long unsigned int var12 = ULONG_MAX;
    printf("Range of unsigned long is: %lu to %lu \n", var11, var12);
    printf("\n");

    //SIGNED & UNSIGNED LONG LONG INTEGERS
    long long int var13 = LONG_LONG_MIN;
    long long int var14 = LONG_LONG_MAX;
    printf("Range of signed long long is: %lld to %lld \n", var13, var14);

    long long unsigned int var15 = 0;
    long long unsigned int var16 = ULONG_LONG_MAX;
    printf("Range of unsigned long long is: %llu to %llu \n", var15, var16);
    printf("\n");

    // What happens when we exceed the range
    unsigned int varX1 = 4294967295; //4294967295 is the maximum unsigned value
    printf("%u\n",varX1);

    int varX2 = 2147483648; //2147483647 is the maximum +ve signed value
    printf("%d\n",varX2);

    return 0;
}