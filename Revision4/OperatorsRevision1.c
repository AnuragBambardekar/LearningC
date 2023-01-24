#include <stdio.h>
int main()
{
    //Question 1
    int i = 5;
    int var = sizeof(i++); //sizeof returns size of int and does not evaluate what's inside
    printf("%d %d\n",i, var); // 5 4

    //Question 2
    int a = 1;
    int b = 1;
    int c = ++a || b++; //short circuiting happens here, so b++ does not evaluate
    int d = b-- && --a;

    printf("%d %d %d %d\n", d,c,b,a);
    printf("%d",~10);

    return 0;
}