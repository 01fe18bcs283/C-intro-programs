#include <stdio.h>

int main() {
    double num;
    printf("Enter a double number: ");
    scanf("%lf", &num);
    printf("You entered: %.2lf\n", num);
    return 0;
}