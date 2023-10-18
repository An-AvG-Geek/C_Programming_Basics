// This is a program that inputs array from user and searches if a given number is present in the array
// LINEAR SEARCH


#include <stdio.h>

int main() {
    int i, lim;
    printf("Enter the limit: ");
    scanf("%d", &lim);
    char num[lim];
    printf("Enter the values: ");
    
    for (i = 0; i < lim; i++) {
        scanf(" %c", &num[i]);
    }
    
    char s;
    printf("Enter the number to search: ");
    scanf(" %c", &s);
    
    int found = 0;
    
    for (i = 0; i < lim; i++) {
        if (s == num[i]) {
            found = 1;
            break;
        }
    }
    
    if (found == 1) {
        printf("The number is present\n");
    } else {
        printf("The number is not present\n");
    }
    
    return 0;
}
