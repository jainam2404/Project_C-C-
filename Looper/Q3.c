#include <stdio.h>

int main()
{
    int numb, ognum, firstnum, lastnum;
    printf("Enter any numb: ");
    scanf("%d", &numb);
    ognum = numb;
    lastnum = numb % 10;
    while (numb >= 10)
    {
        numb = numb / 10;
    }
    firstnum = numb;
    printf("The sum of the first and the last digit: %d\n", firstnum + lastnum);
    return 0;
}
