#include <stdio.h>
int main()
{
    float c;
    float f;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    f = (c * 9 / 5) + 32.0;

    printf("Temperature in Fahrenheit: %f\n", f);

    return 0;
}