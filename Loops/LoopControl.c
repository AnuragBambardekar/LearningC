#include <stdio.h>

int main()
{
    //break demo
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);

    while(n != 0)
    {
        if(n < 0)
            break; //exit when number is negative
        
        printf("Enter a number\n");
        scanf("%d",&n);
    }

    //continue demo
    int i, m = 2;
    for(i=1; i<=20; i++)
    {
        if(i==m)
        {
            m = m+2;
            continue;
        }
        printf("%d\n", i); //print odd numbers
    }
}