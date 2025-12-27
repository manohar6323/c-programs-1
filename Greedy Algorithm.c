#include <stdio.h>
int main() {
    int coins[] = {10, 5, 2, 1};
    int amount = 28, i;
    printf("Coins used:\n");
    for(i = 0; i < 4; i++) {
        while(amount >= coins[i]) {
            amount -= coins[i];
            printf("%d ", coins[i]);
        }
    }
    return 0;
}
