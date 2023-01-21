#include <stdio.h>

int main()
{
    int var = 052; //treated as octal value
    printf("%d\n",var); //42 decimal value corresponding to octal value
    printf("%o\n",var); //52
    return 0;
}