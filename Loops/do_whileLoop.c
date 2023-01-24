#include <stdio.h>

int main()
{
    int i = 3;
    do{
        printf("%d\n",i);
        i --;
    } while(i > 0);

    int n = 0;
    //printf("%d\n",n);
    do{
        printf("Enter an Integer and Enter 0 to EXIT.\n");
        scanf("%d",&n);
    } while(n != 0);
    return 0;
}