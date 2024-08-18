#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> dp;
vector<vector<int>> max_dp;

int computeXOR(vector<int>& a, int i, int j) {
    if (dp[i][j] != -1) return dp[i][j]; // Return cached result

    if (i == j) return dp[i][j] = a[i];  // Base case: single element

    // Recursive case: calculate XOR for the current subarray
    return dp[i][j] = computeXOR(a, i, j - 1) ^ computeXOR(a, i + 1, j);
}

int computeMaxXOR(vector<int>& a, int i, int j) {
    if (max_dp[i][j] != -1) return max_dp[i][j]; // Return cached result

    if (i == j) return max_dp[i][j] = a[i]; // Base case: single element

    // Recursive case: calculate maximum XOR for the current subarray
    return max_dp[i][j] = max({computeMaxXOR(a, i, j - 1), computeMaxXOR(a, i + 1, j), computeXOR(a, i, j)});
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Initialize the memoization tables with -1 (indicating uncomputed values)
    dp.assign(n, vector<int>(n, -1));
    max_dp.assign(n, vector<int>(n, -1));

    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        l--, r--; // Converting to 0-based indexing
        cout << computeMaxXOR(a, l, r) << endl;
    }

    return 0;
}
