#include <stdio.h>

int main()
{
    //sum of factorial of individual digits of a number is equal to original number
    int n=0,q,rem, factorial=1, result=0,i;
    printf("Enter a number: \n");
    scanf("%d",&n);

    q=n;
    while(q!=0)
    {
        rem = q%10;
        for(i=1; i<=rem; i++)
        {   
            factorial = factorial * i;
        }
        result = result + factorial;
        factorial = 1;
        q = q/10;
    }

    if(result == n)
    {
        printf("%d is a Strong number.",n);
    }
    else
    {
        printf("%d is not a Strong number.",n);
    }

    return 0;
}