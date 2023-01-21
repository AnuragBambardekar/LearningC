#include <stdio.h>

int main()
{
    int var = 34;
    var = 57; //able to change value of var

    const int var1 = 32;
    //var1 = 33; //cannot change value of const
    printf("%d", var);
    return 0;
}