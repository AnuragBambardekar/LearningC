#include <stdio.h>

int main()
{
    int a1, b1;
    printf("Enter the first number: \n");
    scanf("%d", &a1);
    printf("Enter the second number: \n");
    scanf("%d", &b1);

    printf("a / b = %d\n", a1/b1);
    printf("a %% b = %d\n", a1%b1);

    //Operator Precedence and associativity
    int a = 2, b = 3,c = 4, d = 5;
    printf("a *b / c = %d\n",a*b/c);
    printf("a + b - c = %d\n",a+b-c);
    printf("a + b * d -c %% a = %d\n",a+b*d-c%a);
    return 0;
}