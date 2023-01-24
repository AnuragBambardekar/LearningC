#include <stdio.h>

int main()
{
    int a=0, b=1, i, res, n;
    printf("Enter the number of terms: \n");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("%d ", a);
        res = a + b;
        a = b;
        b = res;
    }
}