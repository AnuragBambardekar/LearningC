#include <stdio.h>
#include <limits.h>

int main()
{
    char var = 65;
    printf("%c\n",var);

    char varA = 'A';
    printf("%c\n",varA);

    /* char varABC = 'ABC'; //overflow in conversion from 'int' to 'char'
    printf("%c\n",varABC); */

    char var1 = CHAR_MIN;
    char var2 = CHAR_MAX;
    printf("Range of signed char is: %d to %d \n", var1, var2);

    char var3 = -128;
    char var4 = 128;
    printf("%c\n", var3);
    printf("%c\n", var4);

    char var5 = -127;
    char var6 = 129;
    printf("%c\n", var5);
    printf("%c\n", var6);
    //Doesn't print the Extended ASCII in VSCode Terminal (probably something to do with the encoding, I have it on UTF-8 but still it doesn't work)
    //Tried running the .exe file on CMD and it worked, output in Images folder
        
    return 0;
}