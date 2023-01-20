#include <stdio.h>

int main()
{
    int var = 3;
    {
        int var = 4;
        printf("%d\n", var);
    }
    
    printf("%d",var);
    return 0;
}