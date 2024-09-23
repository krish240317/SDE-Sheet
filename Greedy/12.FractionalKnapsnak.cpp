//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Item {
    public:
    int value;
    int weight;
};


// } Driver Code Ends
// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution {
  public:
  bool static cmp(Item a,Item b)
  {
      double x=(double)a.value/(double)a.weight;
      double y=(double)b.value/(double)b.weight;
      return x>y;
  }
  
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n) {
        // Your code here
        sort(arr,arr+n,cmp);
        int countw=0;
        double profit=0.0;
        
        for(int i=0;i<n;i++)
        {
            if(countw+arr[i].weight<=W)
            {
                //no problem no fraction take whole item 
                countw+=arr[i].weight;
                profit+=arr[i].value;
            }
            else
            {
                //fraction 
                int remain=W-countw;
                profit+=((double)arr[i].value/(double)arr[i].weight)*(double)remain;
                break;
            }
        }
        return profit ;
    }

};


//{ Driver Code Starts.
int main() {
    int t;
    // taking testcases
    cin >> t;
    cout << setprecision(6) << fixed;
    while (t--) {
        // size of array and weight
        int n, W;
        cin >> n >> W;

        Item arr[n];
        // value and weight of each item
        for (int i = 0; i < n; i++) {
            cin >> arr[i].value >> arr[i].weight;
        }

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(W, arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends