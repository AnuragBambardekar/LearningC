#include <stdio.h>
#define PI 3.14159
#define add(x,y) x+y
#define greater(x,y) if(x > y)\
                        printf("%d is greater than %d\n",x,y); \
                      else \
                        printf("%d is lesser than %d\n",x,y);

int main()
{
    printf("%.5f\n", PI);
    printf("addition of two numbers is: %d\n", add(3,4));
    greater(5,6);

    //first expansion then evaluation
    printf("result of expression a * b + c is: %d\n", 5 * add(4,3));

    //some predefined macros
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}