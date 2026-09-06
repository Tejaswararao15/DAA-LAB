#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int W = 7;

    int weight[] = {1, 3, 4, 5};
    int value[] = {1, 4, 5, 7};

    int dp[n + 1][W + 1];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= W; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (weight[i - 1] <= j)
                dp[i][j] = max(value[i - 1] + dp[i - 1][j - weight[i - 1]], dp[i - 1][j]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    cout << "Maximum value = " << dp[n][W];

    return 0;
}