#include <stdio.h>
int cube(int *element)
{
    return (*element) * (*element) * (*element);
}

int main()
{
    int size;


    printf("Enter Array's size: ");
    scanf("%d", &size);

    int arr[size][size];


    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }


    printf("Cubes of all elements:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int *ptr = &arr[i][j];
            int result = cube(ptr);
            printf("%d\t", result);
        }
        printf("\n");
    }

    return 0; 
}
