#include <stdio.h>

static int i;
static int i = 27;
static int i;
//i=45; //redefinition is not allowed

int main()
{
    static int i; //if this is commented then output will be 27
    //assignment is allowed inside function block
    i=45;
    printf("%d",i); //local variable gets preference
    return 0;
}

//gcc q2.c -o q2.exe
//size q2.exe

/*Before writing code inside int main()*/
//text    data     bss     dec     hex filename
//9232    1724     416   11372    2c6c q2.exe

/*After writing code inside int main()*/
//text    data     bss     dec     hex filename
//33464    2236    2976   38676    9714 q2.exe

/*Finally*/
//text    data     bss     dec     hex filename
//33480    2236    2976   38692    9724 q2.exe