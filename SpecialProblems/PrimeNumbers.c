#include <stdio.h>
#include <math.h>

int main()
{
    //sum of factorial of individual digits of a number is equal to original number
    int x=0;
    printf("Enter a number [only positive integers]: \n");
    scanf("%d",&x);

    //finding the square root
    int val1;
    val1 = ceil(sqrt(x));

    //check divisibility
    int val2=x, flag=0, i=0;
    for(i=2; i<=val1; i++) 
    {
        //check if any numbers less than square root of number is divisible by squareroot of number
        if(val2%i==0)
        {
            flag =1;
        }
    }
    if((flag == 0 && val2 != 1) || val2 == 2 || val2 ==3)
    {
        printf("%d is a prime number", val2);
    }
    else
    {
        printf("%d is not a prime number", val2);
    }
    return 0;
}