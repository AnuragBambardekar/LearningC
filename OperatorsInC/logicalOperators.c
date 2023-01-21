#include <stdio.h>

int main()
{
    int a = 5, b = 3;
    int incr;

    //AND
    if(a==5 && a!=6 && a<=56 && a>4) {
        printf("Yes\n");
    }

    //OR
    if(a!=5 || a==6 || a>=56 || a>4) {
        printf("Yes\n");
    }

    //NOT
    if(!(a==6)) {
        printf("Yes\n");
    }

    a = 5, b = 3;
    incr;
    //Short Circuit Case in case of &&
    printf("Short Circuit Case in case of &&\n");
    incr = (a < b) && (b++);
    printf("%d\n", incr);
    printf("%d\n", b);

    incr = (a > b) && (b++);
    printf("%d\n", incr);
    printf("%d\n", b);

    a = 5, b = 3;
    incr;
    //Short Circuit Case in case of ||
    printf("Short Circuit Case in case of ||\n");
    incr = (a > b) || (b++);
    printf("%d\n", incr);
    printf("%d\n", b);

    incr = (a < b) || (b++);
    printf("%d\n", incr);
    printf("%d\n", b);

    return 0;
}