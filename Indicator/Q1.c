#include <stdio.h>

int main()
{
    char str[100];
    char *ptr;
    int length = 0;
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    ptr = str;
    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }
    if (length > 0 && str[length - 1] == '\n')
    {
        length--;
    }
    printf("The length of a string is : %d", length);
    return 0;

    return 0;
}