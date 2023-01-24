#include <stdio.h>

int main()
{
    int n, result=1, q, rem, count=0, palinRes=0;
    printf("Enter a number:\n");
    scanf("%d", &n);

    q=n;
    //Find number of digits in number (order)
    while(q!=0)
    {
        count = count + 1;
        q = q/10;
    }

    printf("Order of number: %d\n",count);

    //Check palindrome case
    q=n;
    while(q!=0)
    {
        rem = q%10;
        printf("Remainder: %d\n",rem);
        int cnt = count;
        while(cnt!=0)
        {
            result = rem*result;
            printf("result of digit operation at each stage: %d\n",result);
            cnt--;
        }
        palinRes = palinRes + result;
        printf("final result of digit operation: %d\n",result);
        q = q/10;
        result = 1;
    }

    printf("Armstrong result of number: %d\n",palinRes);

    if(palinRes == n)
    {
        printf("Armstrong number!");
    }
    else
        printf("Not an Armstrong number!");
    return 0;
}