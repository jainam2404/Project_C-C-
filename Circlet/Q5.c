#include <stdio.h>

int main() {
    int n = 5;

    for (int i = n; i >= 1; i--) {
 
        for (int s = 1; s <= n - i; s++) {
            printf("  ");
        }


        for (int j = i; j <= n; j++) {
            printf("%d ", j);
        }


        for (int j = n - 1; j >= i; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
