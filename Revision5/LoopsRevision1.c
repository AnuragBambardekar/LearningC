#include <stdio.h>

int main()
{
    int i =1024;
    for(;i;i>>=1) //this is allowed as long as ; as written in construct
        printf("Hello World: %d\n", i);
    return 0;
}