#include<stdio.h>
int main(){
    int i, j, rows = 5;

    for(i = 1; i <= rows; i++){
        for(j = 1; j <= 5; j++){
            if(i == 1 || i == 3){
                printf("*");
            }
            else if(i==2 && (j == 1 || j == 5)){
                printf("*");
            }
            else if(i > 3 && j == 1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}