#include <stdio.h>

int main()
{
    int rows, column, i, j,row,col;

    printf("Enter the Array's row size : ");
    scanf("%d", &rows);
    printf("Enter the Array's column size: ");
    scanf("%d", &column);
    int a[rows][column];
    printf("Enter array's elements: \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the Row Number  : ");
    scanf("%d", &row);
    int rsum = 0;
    printf("Elements of Row %d: ", row);
    for (j = 0; j < column; j++)
    {
        printf("%d", a[row][j]);
        rsum += a[row][j];
    }
    printf("\n The sum of Row %d: %d  \n", row, rsum);

    printf("Enter the Column Number: ");
    scanf("%d", &col);
    int csum = 0;
    printf("Elements of column %d: ", col);
    for (i = 0; i < rows; i++)
    {
        printf("%d", a[i][col]);
        csum += a[i][col];
    }
    printf("\n The sum of Column %d: %d \n", col, csum);
    return 0;
}