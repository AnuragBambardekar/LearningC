#include <stdio.h>

int main()
{
    int a =4, b = 3;
    printf("%d %d\n",a,b);
    printf("%d\n", a+++b);
    printf("%d %d\n",a,b);

    a=4,b=3;
    printf("%d %d\n",a,b);
    printf("%d\n", a + ++b);
    printf("%d %d\n",a,b);

    a=4,b=3;
    printf("%d %d\n",a,b);
    printf("%d\n", a++ + ++b);
    //printf("%d\n", a+++++b); //compile time error
    printf("%d %d\n",a,b);
    return 0;
}