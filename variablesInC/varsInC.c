#include <stdio.h>

int main(){
    int var = 3;
    var = 4;
    printf("%d\n",var);

    int var1 = 3;
    int var2;
    var2 = var1;
    printf("%d\n",var2);

    //int var1, var2, var3; //cannot re-define variables
    int var3, var4, var5;
    var3 = var4 = var5 = 4;
    printf("%d\n",var3);
    printf("%d\n",var4);
    printf("%d\n",var5);

    return 0;
}