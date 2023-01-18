#include <stdio.h>

int main()
{
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(double));
    printf("%d\n",sizeof(long double));

    float var1 = 3.1415926535897932;
    double var2 = 3.1415926535897932;
    long double var3 = 3.141592653589793213456;
    printf("%.30f\n",var1); //3.1415927410125732 because float stores fractional values upto 7 digits
    printf("%.30lf\n",var2); //3.1415926535897931 because double stores fractional values upto 16 digits
    printf("%.30Lf\n",var3); //3.141592653589793115998 because long double stores fractional values upto 16 digits

    //This means that long double is a floating point type having at least the same precision as the floating point type double.
    //So maybe long double is the same as double. Maybe it has better precision than double. The C standard only tells us that long double can't have worse precision than double.
    //So the difference - if any - depends on your system.

    //if we want less precision then use float
    //if we want high accuracy/precision then use long double

    int var4 = 4/9;
    printf("%d\n",var4);

    float var5 = 4/9;
    printf("%.2f\n",var5);

    float var6 = 4.0/9.0;
    printf("%.2f\n",var6);

    return 0;
}