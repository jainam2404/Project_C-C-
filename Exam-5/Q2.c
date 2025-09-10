#include <stdio.h>

int main()
{
    int row, col, i, j;

    printf("Enter the Array's row size : ");
    scanf("%d", &row);
    printf("Enter the Array's column size: ");
    scanf("%d", &col);
    int a[row][col];
    printf("Enter array's elements: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int max = a[0][0];
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            if (a[i][j] > max)
        {
            max = a[i][j];
        }
        }
        
    }
    

    printf("The largest element is : %d", max);
    return 0;
}