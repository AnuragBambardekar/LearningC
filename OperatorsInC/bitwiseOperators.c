#include <stdio.h>

int main()
{
    //Bitwise
    int a = 7, b = 4;
    int bw_and = a & b;
    int bw_or = a | b;
    int bw_not = ~a;

    printf("a: %d, b:%d\n", a,b);
    printf("a & b is: %d\n",bw_and);
    printf("a | b is: %d\n",bw_or);
    printf("~a is: %d\n",bw_not);

    //Bitwise vs Logical operators
    printf("\n");
    char x = 1, y =2;
    int bw_and_res = x&y;
    int logical_and_res = x&&y;
    printf("x&y is: %d\n",bw_and_res);
    printf("x&&y is: %d\n",logical_and_res);

    if(x&y){
        printf("x&y is: %d\n",bw_and_res);
    }
    if(x&&y){
        printf("x&&y is: %d\n",logical_and_res);
    }

    //left shift operator
    printf("\n");
    char var1 = 3; //0000 0011
    printf("3<<1 is: %d\n", var1<<1); //3*2^1
    printf("3<<4 is: %d\n", var1<<4); //3*2^4

    //right shift operator
    printf("\n");
    char var2 = 3; //0000 0011
    printf("3>>1 is: %d\n", var2>>1); //3*2^1
    printf("3>>4 is: %d\n", var2>>4); //3*2^4
    printf("32>>4 is: %d\n", 32>>4); //3*2^4

    //Bitwise XOR operator
    printf("\n");
    printf("7^4 is: %d\n", 7^4); //3*2^1

    x = 4, y = 3;
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    printf("After XOR, x = %d and y = %d", x,y);

    return 0;
}