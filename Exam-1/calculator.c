#include <stdio.h>
int main()
{
    int salary;
    printf("Enter your monthly salary: ");
    scanf("%d", &salary);
    float hra;
    printf("Enter HRA: ", hra);
    scanf("%f", &hra);
    float da;
    printf("Enter DA: ", da);
    scanf("%f", &da);
    float ta;
    printf("Enter TA: ", ta);
    scanf("%f", &ta);
    float gross = salary + hra + da + ta;
    printf("Gross Salary: %f\n", gross);
    return 0;
}