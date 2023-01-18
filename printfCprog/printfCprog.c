#include <stdio.h>

//How to use placeholders in C program
int main()
{
    int two = 2, three = 3, six = 6;
    int result = (two + three) * six/three;
    printf("Arithmetic expressions in C can be written like this: (%d + %d) * %d / %d ", two, three, six, three);
    printf("and the result of this expression is : %d", result);
}