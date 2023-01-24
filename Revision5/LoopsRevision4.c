#include <stdio.h>

int main()
{
    int i = 0;
    for(printf("one\n"); i<3 && printf(""); i++)
    {
        printf("Hi!\n");
    }
    return 0;
}

//prints one
//checks 0<3 && 0 (True and False = False), so loop does not execute