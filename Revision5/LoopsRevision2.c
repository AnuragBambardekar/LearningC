#include <stdio.h>

int main()
{
    int i;
    for(i=0;i<20;i++) //this is allowed as long as ; as written in construct
    {
        switch(i)
        {
            case 0: i += 5;
            case 1: i += 2;
            case 5: i += 5;
            default: i += 4;
        }
        printf("%d ", i);
    }
    return 0;
}

//No breaks here, so all cases + default is executed!

// 0 < 20
// 0 + 5; 5
// 5 + 2; 7
// 7 + 5; 12
// 12 + 4; 16
// prints 16
//i = 16 now, increment by 1

// 17 < 20
// None of the cases match, so execute only default, so 17 + 4 = 21

// 21 !< 20
// prints 21
