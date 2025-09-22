#include <stdio.h>

int main()
{
    int num, i, j;

    printf("Enter the Array's row & col size : ");
    scanf("%d", &num);
    int a[num][num];
    printf("Enter array's elements: \n");
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int b[num][num];
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    printf("\nTransposed Matrix of an Array: \n");
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}