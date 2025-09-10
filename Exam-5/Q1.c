#include <stdio.h>

int main() {
    int num,i;
    
    printf("Enter the Array's Size : ");
    scanf("%d",&num);
    int a[num];
    printf("Enter array's elements: \n");
    for ( i = 0; i <num; i++)
    {
       printf("a[%d] = ",i);
       scanf("%d",&a[i]);
    }
    printf("Negative elements from an Array: ");
    for ( i = 0; i < num; i++)
    {
        if (a[i]<0)
        {
            printf("%d",a[i]);
        }
    }
    
    return 0;
}