#include <stdio.h>

int main() {
    int terms, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("Fibonacci Series: %d, %d", first, second);  

    for (int i = 3; i <= terms; i++) {
        next = first + second;  
        printf(", %d", next);   
        first = second;        
        second = next;         
    }

    printf("\n");

    return 0;
}