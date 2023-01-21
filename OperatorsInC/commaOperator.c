#include <stdio.h>

int main()
{
    int a = 4, b = 3, c = 5;
    int d  = (3,4,8); //returns rightmost operand in the expression, simply evaluates rest of the operands
    
    printf("%d\n", d);

    int var = (printf("%s\n","Hello"),5); //first evaluate then reject the statement, value will be returned to var after evaluating the first operand
    printf("%d\n", var);

    //least precedence in C language
    int e;
    e = 3, 4, 8; //assignment operator has greater precedence than comma operator
    printf("%d\n", e);

    int f;
    (f = 3), 4, 8; //assignment operator has greater precedence than comma operator
    printf("%d\n", f);

    // int g = 3,4,8; //here comma operator acts as a separator ERROR
    //printf("%d\n", g);

    int h;
    h = (3,4,8); //brackets has highest precedence than other operators
    printf("%d\n", h);

    int i = (3,4,8); //brackets has highest precedence than other operators
    printf("%d\n", i);

    //Homework Problem
    int var1;
    int num1;

    num1 = (var = 15, var+35); //first operand evaluates but last operand's value is stored in variable
    printf("%d\n", num1);

    return 0;
}