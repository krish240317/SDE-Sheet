#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
bool static cmp(vector<int> &a, vector<int> &b)
{
    return a[0] < b[0];
}
int minRooms(vector<vector<int>> arr)
{
      //we use pq as we need to check everytime to all the days meeting that its over or not 
    //so we will use pq optimal way just chek mini end time and can allocate that day 
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int n = arr.size();
    sort(arr.begin(), arr.end(), cmp);
    if (n == 0)
        return 0;
    pq.push({arr[0][1], arr[0][0]});
    int count = 1;//minimumn one day 
    for (int i = 1; i < n; i++)
    {

        if (pq.top().first <= arr[i][0])
        {
            // cout<< pq.top().first<<endl;
            //Possible (No Overlap) 
            pq.push({arr[i][1], arr[i][0]});
            pq.pop();
        }
        else
        {
            // (Overlaping (Increase day))
            count++;
            pq.push({arr[i][1], arr[i][0]});
            //NO pop as new day 
        }
    }
    return count;
}
int main()
{

    return 0;
}