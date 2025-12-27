#include <stdio.h>
#include <limits.h>
#define MAX_DEPTH 3
int alphaBeta(int depth, int nodeIndex, int isMax,
              int values[], int alpha, int beta)
{
    if (depth == MAX_DEPTH)
        return values[nodeIndex];
    if (isMax) {
        int best = INT_MIN;
        for (int i = 0; i < 2; i++) {
            int val = alphaBeta(depth + 1,
                                nodeIndex * 2 + i,
                                0, values, alpha, beta);
            best = (best > val) ? best : val;
            alpha = (alpha > best) ? alpha : best;
            if (beta <= alpha)
                break;
        }
        return best;
    }
    else {
        int best = INT_MAX;
        for (int i = 0; i < 2; i++) {
            int val = alphaBeta(depth + 1,
                                nodeIndex * 2 + i,
                                1, values, alpha, beta);
            best = (best < val) ? best : val;
            beta = (beta < best) ? beta : best;
            if (beta <= alpha)
                break;
        }
        return best;
    }
}
int main() {
    int values[] = {3, 5, 6, 9, 1, 2, 0, -1};
    int result = alphaBeta(0, 0, 1, values, INT_MIN, INT_MAX);
    printf("Optimal value using Alpha-Beta Pruning = %d\n", result);
    return 0;
}
