#include <bits/stdc++.h>
using namespace std;
int findAllSubarraysWithGivenSum(vector<int> &arr, int k)
{
    // Write Your Code Here
    //For Positive and negative elements  
    int n=arr.size();
        unordered_map<int,int> m;
        // int n=arr.size();
        int sum=0;
        // int sum=0;
        int count=0;
        //Adding sum is necessary as sum -k can be 0 
        m[sum]=1;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            int val =sum-k;
            if(m.find(val)!=m.end())
            {
                count+=m[val];
            }
            m[sum]++;

        }
        return count;
    }

int main()
{

    return 0;
}