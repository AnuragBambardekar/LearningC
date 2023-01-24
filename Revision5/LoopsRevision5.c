#include <stdio.h>

int main()
{
    unsigned int i = 500;
    while(i++ != 0); //no body of loop, loop finishes here
    printf("%d",i); // 1
    return 0;
}

//500!=0 True
//501!=0 True
//502!=0 True
//...
//4294967295!=0 True this is max value in int range
//0!=0 False
//1