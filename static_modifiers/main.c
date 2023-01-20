#include <stdio.h>
#include <stdlib.h>
//to compile: gcc main.c add.c
//to run: ./a.exe

extern int increment();
//extern int count; //cannot use now since now count is static

int main()
{
    int value;
    value = increment(); //1 when global count, 1
    value = increment(); //1 when global count, 2
    value = increment(); //1 when global count, 3

    //count = count + 3;
    //value = count;

    printf("%d", value); //output = 1
    return 0;
}