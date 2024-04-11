#include<bits/stdc++.h>
using namespace std;


int firstOcc(vector<int> &arr, int n, int key)
{

    int s = 0, e = n - 1;

    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        { // Right me jao
            s = mid + 1;
        }
        else if (key < arr[mid])
        { // left me jao
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOcc(vector<int> &arr, int n, int key)
{

    int s = 0, e = n - 1;

    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        { // Right me jao
            s = mid + 1;
        }
        else if (key < arr[mid])
        { // left me jao
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int count(vector<int> &arr, int n, int x)
{
    // Write Your Code Here
    int p = firstOcc(arr, n, x);
    int y = lastOcc(arr, n, x);
    if (p == -1)
        return 0;
    return (y - p) + 1;
}
