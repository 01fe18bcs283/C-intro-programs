#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

   
    int originalNum = num;

   
    while (num != 0) {
        remainder = num % 10;                 
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;                             
    }

    printf("Reversed number of %d is %d\n", originalNum, reversedNum);

    return 0;
}
