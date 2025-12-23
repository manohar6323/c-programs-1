#include <stdio.h>
int main() {
    int n;
    long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial of a negative number is not defined.\n");
    } else {
        int i = 1;
        while (i <= n) {
            fact = fact * i;
            i++;
        }
        printf("Factorial of %d = %lld\n", n, fact);
    }
    return 0;
}
