#include <bits/stdc++.h>
using namespace std;
//Dummy class Item
class Item{
    public:
 int value;
 int weight;
};
class Solution
{
public:
    bool static cmp(Item a, Item b)
    {
        double x = (double)a.value / (double)a.weight;
        double y = (double)b.value / (double)b.weight;
        return x > y;
    }

    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr, arr + n, cmp);
        int countw = 0;
        double profit = 0.0;

        for (int i = 0; i < n; i++)
        {
            if (countw + arr[i].weight <= W)
            {
                // no problem no fraction take whole item
                countw += arr[i].weight;
                profit += arr[i].value;
            }
            else
            {
                // fraction
                int remain = W - countw;
                profit += ((double)arr[i].value / (double)arr[i].weight) * (double)remain;
                break;
            }
        }
        return profit;
    }
};
///////////////////Coding Ninajs/////////////////////////////////////////////////
bool static cmp(pair<int, int> a, pair<int, int> b)
{
    double x = (double)a.second / (double)a.first;
    double y = (double)b.second / (double)b.first;
    return x > y;
}
double maximumValue(vector<pair<int, int>> &arr, int n, int W)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    sort(arr.begin(), arr.end(), cmp);
    int countw = 0;
    double profit = 0.0;
    for (int i = 0; i < n; i++)
    {
        if (countw + arr[i].first <= W)
        {
            // no fraction
            countw += arr[i].first;
            profit += arr[i].second;
        }
        else
        {
            int remain = W - countw;
            profit += ((double)arr[i].second / (double)arr[i].first) * (double)remain;
            break;
        }
    }
    return profit;
}
int main()
{

    return 0;
}