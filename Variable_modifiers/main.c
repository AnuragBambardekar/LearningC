#include <stdio.h>
//command to compile and run: gcc main.c other.c
//./a.exe

extern int a; //access 'a' from other.c
//can also define it multiple times
extern int a;
extern int a;
extern int a;

int b =9; //first comment out the line in other.c and use this variable
//e x t e r n int c = 8; //when an extern variable is initialized, memory is allocated.

int main()
{
    extern int b;
    printf("%d\n", a);
    printf("%d\n", b);
    //printf("%d\n", c);
    return 0;
}
