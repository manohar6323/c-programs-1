#include <stdio.h>
void generateNthrow(int N)
{
    int prev = 1;
    printf("%d", prev);
    for (int i = 1; i <= N; i++) {
        // nCr = (nCr-1 * (n - r + 1))/r
        int curr = (prev * (N - i + 1)) / i;
        printf(",%d ", curr);
        prev = curr;
    }
}

int main()
{
    int n = 5;
    generateNthrow(n);
    return 0;
}
