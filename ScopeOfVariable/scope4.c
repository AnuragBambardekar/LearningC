#include <stdio.h>

int fun();

int var = 10; //global variable, available to all functions

int main()
{
    int var = 3; //local variable, override global var
    printf("%d\n", var); //3
    fun();
    return 0;
}

int fun()
{
    printf("%d", var); //accesses the global variable, 10
}