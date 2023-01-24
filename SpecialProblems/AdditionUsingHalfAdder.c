#include <stdio.h>

int main()
{
    int x,y,sum,carry;
    printf("Enter two numbers to add: \n");
    scanf("%d %d", &x, &y);

    while(y!=0)
    {
        sum = x^y;
        carry = (x&y)<<1;
        x=sum;
        y=carry;
    }
    
    
    printf("Sum of two values is: %d",x);

    return 0;
}