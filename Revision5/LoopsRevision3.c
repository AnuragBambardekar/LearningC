#include <stdio.h>

int main()
{
    int i = -5;
    while( i <= 5 )
    {
        if(i>=0)
            break; //exit the loop structure immediately
        else{
            i++;
            continue; //force to next iteration, dont execute anything below
        }
        printf("Hello!");
    }
    return 0;
}