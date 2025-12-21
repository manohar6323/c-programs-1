#include <stdio.h>
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
void Rotate(int arr[], int k, int N)
{
    int i, j, a, temp;
    k = k % N;
    int rotate = gcd(k, N);
    for (i = 0; i < rotate; i++) {
        temp = arr[i];
        j = i;
        while (1) {
            a = j + k;
            if (a >= N)
                a = a - N;
            if (a == i)
                break;
            arr[j] = arr[a];
            j = a;
        }
        arr[j] = temp;
    }
}
int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    Rotate(arr, 2, 5);
    printArray(arr, 5);
    return 0;
}
