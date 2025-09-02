#include <stdio.h>

int main() {
    int number, originalNumber, firstDigit, lastDigit;

    printf("Enter any number: ");
    scanf("%d", &number);

    originalNumber = number;

    
    lastDigit = number % 10;

    
    while (number >= 10) {
        number = number / 10;
    }
    firstDigit = number;

    printf("The sum of the first and the last digit: %d\n", firstDigit + lastDigit);

    return 0;
}
