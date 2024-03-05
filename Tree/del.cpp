#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        long long sum = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        
        sum += arr[0];
        sum += arr[1];
        for (int i = 2; i < n; i++)
        {
            sum += (2 * arr[i]);
        }
        cout << sum << endl;

    }


}