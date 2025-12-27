#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, key = 30, found = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element %d found at index %d\n", key, i);
            found = 1;
            break;
        }
    }
    if(!found)
        printf("Element %d not found\n", key);
    return 0;
}
