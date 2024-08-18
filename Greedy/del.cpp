#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<vector<int>> dp(n, vector<int>(n));

    // Fill the dp array with initial values
    for (int i = 0; i < n; ++i) {
        dp[i][i] = a[i];
    }

    // Compute the XOR for all subarrays
    for (int length = 1; length < n; ++length) {
        for (int i = 0; i + length < n; ++i) {
            int j = i + length;
            dp[i][j] = dp[i][j - 1] ^ dp[i + 1][j];
        }
    }

    vector<vector<int>> max_dp(n, vector<int>(n));

    // Fill the max_dp array with initial values
    for (int i = 0; i < n; ++i) {
        max_dp[i][i] = dp[i][i];
    }

    // Compute the maximum XOR for all subarrays
    for (int length = 1; length < n; ++length) {
        for (int i = 0; i + length < n; ++i) {
            int j = i + length;
            max_dp[i][j] = max({max_dp[i][j - 1], max_dp[i + 1][j], dp[i][j]});
        }
    }

    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        l--, r--; // Converting to 0-based indexing
        cout << max_dp[l][r] << endl;
    }

    return 0;
}
