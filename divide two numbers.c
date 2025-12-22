#include <stdio.h>
int main() {
    float a, b, result;
    printf("Enter two numbers:\n");
    scanf("%f %f", &a, &b);
    if (b != 0) {
        result = a / b;
        printf("Result = %.2f\n", result);
    } else {
        printf("Division by zero is not allowed\n");
    }
    return 0;
}
