#include <bits/stdc++.h>
using namespace std;

void solve(int ind, vector<int> &arr, vector<int> &ans, int sum)
{
    int n = arr.size();
    if (ind == n)
    {
        ans.push_back(sum);
        return;
    }
    // pick
    solve(ind + 1, arr, ans, sum + arr[ind]);
    solve(ind + 1, arr, ans, sum);
}
vector<int> subsetSums(vector<int> &arr, int n)
{
    vector<int> ans;
    int sum = 0;
    solve(0,arr,ans,sum);
     //sort(ans.begin(), ans.end());
    return ans;
}
int main()
{
    vector<int> arr{3, 1, 2};

    vector<int> ans = subsetSums(arr, arr.size());
    sort(ans.begin(), ans.end());
    cout << "The sum of each subset is " << endl;
    for (auto sum : ans)
    {
        cout << sum << " ";
    }
    cout << endl;
    return 0;
}