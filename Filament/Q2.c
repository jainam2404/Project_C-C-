#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0}; 
    int i;

    printf("Enter any string: ");
    gets(str); 
    for(i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    printf("Frequency of each letter:\n");
    for(i = 0; str[i] != '\0'; i++) {
        if(freq[(unsigned char)str[i]] != 0) {
            printf("%c => %d\n", str[i], freq[(unsigned char)str[i]]);
            freq[(unsigned char)str[i]] = 0; 
        }
    }

    return 0;
}