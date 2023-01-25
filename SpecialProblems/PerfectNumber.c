#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d",&num);

    int i,rem,sum=0;

    for(i=1; i<num; i++)
    {
        rem = num%i;
        if(rem == 0)
        {
            sum = sum+i;
        }
    }

    if(sum == num)
        printf("%d is a Perfect number\n",num);
    else
        printf("%d is not a Perfect number\n",num);
}