#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string frequencySort(string s)
    {
        priority_queue<pair<int, char>> pq;
        int n = s.size();
        // set<pair<char,int>> st;
        map<char, int> m;

        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;
        }

        for (auto it : m)
        {
            pq.push({it.second, it.first});
        }
        string ans = "";
        while (!pq.empty())
        {
            auto temp = pq.top();
            pq.pop();
            int size = temp.first;
            char c = temp.second;
            for (int i = 0; i < size; i++)
            {
                ans += c;
            }
        }
        return ans;
    }
};

int main()
{

    return 0;
}