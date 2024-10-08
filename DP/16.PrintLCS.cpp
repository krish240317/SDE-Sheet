#include <bits/stdc++.h>
using namespace std;

// int longestCommonSubsequence(string text1, string text2)
// {

//     int n = text1.size();
//     int m = text2.size();
//     vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

//     // base case
//     for (int i = 0; i <= n; i++)
//     {
//         dp[i][0] = 0;
//     }
//     for (int j = 0; j <= m; j++)
//     {
//         dp[0][j] = 0;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             if (text1[i - 1] == text2[j - 1])
//             {
//                 dp[i][j] = 1 + dp[i - 1][j - 1];
//             }
//             else
//             {
//                 dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//             }
//         }
//     }
//     // int ans =check(n-1,m-1,text1,text2,dp);
//     // return dp[n][m];
//     string s1 = text1;
//     string s2 = text2;
//     int len = dp[n][m];
//     int i = n;
//     int j = m;

//     int index = len - 1;
//     string str = "";
//     for (int k = 1; k <= len; k++)
//     {
//         str += "$"; // dummy string
//     }

//     while (i > 0 && j > 0)
//     {
//         if (s1[i - 1] == s2[j - 1])
//         {
//             str[index] = s1[i - 1];
//             index--;
//             i--;
//             j--;
//         }
//         else if (s1[i - 1] > s2[j - 1])
//         {
//             i--;
//         }
//         else
//             j--;
//     }
//     cout << str;
// }
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   void all_longest_common_subsequences(string text1, string text2) {
        // Code here
        
        int n = text1.size();
    int m = text2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

    // base case
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 0;
    }
    for (int j = 0; j <= m; j++)
    {
        dp[0][j] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (text1[i - 1] == text2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    // int ans =check(n-1,m-1,text1,text2,dp);
    // return dp[n][m];
    string s1 = text1;
    string s2 = text2;
    int len = dp[n][m];
    int i = n;
    int j = m;

    int index = len - 1;
    string str = "";
    for (int k = 1; k <= len; k++)
    {
        str += "$"; // dummy string
    }

    while (i > 0 && j > 0)
    {
        if (s1[i - 1] == s2[j - 1])
        {
            str[index] = s1[i - 1];
            index--;
            i--;
            j--;
        }
        else if (dp[i - 1][j] > dp[i][j - 1])
        {
            i--;
        }
        
        else
            j--;
    }
    cout<<str;
   }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        ob.all_longest_common_subsequences(s, t);
    }
    return 0;
}
