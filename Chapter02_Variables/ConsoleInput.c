#include <stdio.h>

int main()
{
    int a;
    unsigned int b;
    float c;
    double d;

    printf("Please enter a value for variable a: ");
    scanf("%d", &a); // you have to pass the address of the variable.

    printf("Please enter a value for variable b: ");
    scanf("%u", &b);

    printf("Please enter a value for variable c: ");
    scanf("%f", &c);

    printf("Please enter a value for variable d: ");
    scanf("%lf", &d); // see here. the space holder for the double value is %lf

    printf("The value of variable a is: %d\n", a);
    printf("The value of variable b is: %u\n", b);
    printf("The value of variable c is: %f\n", c);
    printf("The value of variable d is: %lf\n", d);

    return 0;
}
