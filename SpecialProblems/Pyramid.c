#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Enter number of rows:\n ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=2*n-1; j++)
        {
            if(j>=n-(i-1) && j<=n+(i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

//Think of it as a matrix
/*
 n-2 n-1  n  n+1 n+2
  1   2   3   4   5 
1         *
2     *   *   *
3 *   *   *   *   *

n-j = n-(i-1)
n+j = n+(i-1)

the pattern is like this:
3 rows -> 5 columns
4 rows -> 7 columns and so on

so, generalizing it
n rows -> 2n-1 columns

also, observe that the middle column number corresponds to the total number of rows (n).

So, in order to print the stars in the matrix:
for loop for i from 1 to n
    for loop for j from 1 to 2n-1
        if(j>=n-(i-1) && j<=n+(i-1))
            printf("*")
        printf(" ")
    printf("\n")
*/