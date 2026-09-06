#include <iostream>
using namespace std;

int main() {
    int p[] = {10, 20, 30, 40, 30};
    int n = 4;
    int dp[5][5];

    for (int i = 1; i <= n; i++)
        dp[i][i] = 0;

    for (int length = 2; length <= n; length++) {
        for (int i = 1; i <= n - length + 1; i++) {
            int j = i + length - 1;
            dp[i][j] = 999999;

            for (int k = i; k < j; k++) {
                int cost = dp[i][k] + dp[k + 1][j]
                         + p[i - 1] * p[k] * p[j];

                if (cost < dp[i][j])
                    dp[i][j] = cost;
            }
        }
    }

    cout << "Minimum number of multiplications = " << dp[1][n];

    return 0;
}