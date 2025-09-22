#include <stdio.h>
int main()
{
    float a;
    printf("Enter angle  A in degrees: ");
    scanf("%f", &a);
    float b;
    printf("Enter angle B in degrees: ");
    scanf("%f",&b);
    float result = 180-(a+b);
    printf("Angle C in degrees: %f\n", result);
    return 0;
}