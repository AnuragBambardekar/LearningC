#include <stdio.h>

int main()
{
    int n, result=0, q, rem;
    printf("Enter a number: ");
    scanf("%d", &n);

    q=n;

    while(q!=0)
    {
        rem = q%10;
        result = result*10 + rem;
        q = q/10;
    }

    if(result == n)
    {
        printf("Palindrome number!");
    }
    else
        printf("Not a palindrome number!");
    return 0;
}