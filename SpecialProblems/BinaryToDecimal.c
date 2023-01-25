#include <stdio.h>

int main()
{
    int binary, decimal=0, weight=1;
    int rem;
    printf("Enter a binary number: \n");
    scanf("%d",&binary);

    while(binary!=0)
    {
        rem = binary%10; //get the last digit
        decimal = decimal + rem*weight;
        binary = binary/10;
        weight = weight*2;
    }
    printf("Decimal equivalent is: %d\n",decimal);
}