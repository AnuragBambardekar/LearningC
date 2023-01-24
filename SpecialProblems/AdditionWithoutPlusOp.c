#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter two numbers to add: \n");
    scanf("%d %d", &x, &y);

    if(y>0)
    {
        while(y!=0)
        {
            x++;
            y--;
        }
    }
    else if (y<0)
    {
        while(y!=0)
        {
            x--;
            y++;
        }
    }
    
    printf("Sum of two values is: %d",x);

    return 0;
}