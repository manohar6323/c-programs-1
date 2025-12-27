#include <stdio.h>
#include <math.h>
int minimax(int depth, int nodeIndex, int isMax,
            int scores[], int height) {
    if (depth == height)
        return scores[nodeIndex];
    if (isMax) {
        int left = minimax(depth + 1, nodeIndex * 2, 0, scores, height);
        int right = minimax(depth + 1, nodeIndex * 2 + 1, 0, scores, height);
        return (left > right) ? left : right;
    } else {
        int left = minimax(depth + 1, nodeIndex * 2, 1, scores, height);
        int right = minimax(depth + 1, nodeIndex * 2 + 1, 1, scores, height);
        return (left < right) ? left : right;
    }
}
int main() {
    int scores[] = {3, 5, 2, 9, 12, 5, 23, 23};
    int n = sizeof(scores) / sizeof(scores[0]);
    int height = log2(n);
    int optimalValue = minimax(0, 0, 1, scores, height);
    printf("The optimal value is: %d\n", optimalValue);
    return 0;
}
