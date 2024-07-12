#include <bits/stdc++.h>
using namespace std;
bool static cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}
int maxMeetings(int start[], int end[], int n)
{
    // Your code here
    vector<pair<int, int>> v;
    // int n=start.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        v.push_back({start[i], end[i]});
    }

    sort(v.begin(), v.end(), cmp);
    count = 1;
    int endtime = v[0].second;
    for (int i = 1; i < n; i++)
    {
        if (v[i].first > endtime)
        {
            count++;
            endtime = v[i].second;
        }
    }
    return count;
}
int main()
{

    return 0;
}