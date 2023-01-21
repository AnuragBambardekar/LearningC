#include <stdio.h>

int main()
{
    char result;
    int marks = 50;

    result = (marks > 33) ? 'p' : 'f'; //replaces if..else construct
    printf("%c\n", result);

    int result2;
    result2 = 0?2:1; //0 --> false
    printf("%d\n", result2);

    printf("\n");
    int var = 75;
    int var2 = 56;
    int num;

    num = sizeof(var) ? (var2 > 23 ? ((var == 75) ? 'A':0):0):0;
    printf("%d\n", num);
    printf("%c", num);

    return 0;
}