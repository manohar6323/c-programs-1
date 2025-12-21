#include <stdio.h>
int main()
{
    int arr[] = { -2, 2, 1, 1, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int flag = 0, sum;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == 0) {
                flag = 1;
                printf(
                    "True subarray with 0 sum is possible");
                break;
            }
        }
    }
    if (flag == 0)
        printf("No such condition");
}
