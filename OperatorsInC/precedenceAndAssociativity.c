#include <stdio.h>

//Define fun1() and fun2() before main or else
//gives WARNING that implicit declaration of fun1() and fun2()
int fun1()
{
    printf("Hello ");
    return 0;
}
int fun2()
{
    printf("World!");
    return 0;
}
int main()
{
    int a;
    a = fun1() + fun2();
    printf("%d\n",a);

    int b=10,c=20,d=30,e=40;
    if(b <= c == e > d)
    {
        printf("TRUE");
    }
    else{
        printf("FALSE");
    }
    return 0;
}

