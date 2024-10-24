#include <stdio.h>

int main() {
    int n, i = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    printf("Even numbers from 0 to %d:\n", n);
    do {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    } while (i <= n);
    
    printf("\n");
    return 0;
}