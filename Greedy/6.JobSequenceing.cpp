
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
      bool static comparison(Job a, Job b) {
         return (a.profit > b.profit);
      }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        int count=0;
        int profit=0;
        sort(arr, arr + n, comparison);
        int maxi;
        for(int i=0;i<n;i++)
        {
            maxi=max(arr[i].dead,maxi);
        }
       vector<int> hash(maxi+1,-1);//maxi+1 because we need hash[maxi]
       for(int i=0;i<n;i++)
       {
           //check from back slot is empty in hash map
           for(int j=arr[i].dead;j>0;j--)
           {
               if(hash[j]==-1)
               {
                   hash[j]=i;
                   count++;
                   profit+=arr[i].profit;
                   break;
               }
           }
       }
       return {count,profit};
        
        
    } 
};

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends