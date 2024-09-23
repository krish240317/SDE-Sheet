#include<bits/stdc++.h>
using namespace std;
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxChildren(vector<int> &g, vector<int> &s) {
        // Your Code goes here.
        int n=g.size();
        int m=s.size();
        int l=0;
        int r=0;
        int count=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(l<n && r<m)
        {
            if(s[r]>=g[l])
            {
                count++;
                r++;
                l++;
            }
            else{
                r++;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        vector<int> greed;
        int num;
        while (ss >> num)
            greed.push_back(num);
        getline(cin, input);
        ss.clear();
        vector<int> cookie;
        ss.str(input);
        while (ss >> num)
            cookie.push_back(num);

        Solution obj;
        cout << obj.maxChildren(greed, cookie) << endl;
    }
    return 0;
}
// } Driver Code Ends