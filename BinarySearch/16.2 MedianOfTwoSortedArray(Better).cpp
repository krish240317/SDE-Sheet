#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
        int n1=arr1.size();
        int n2=arr2.size();
        int n=n1+n2;
        int i=0;
        int j=0;
        int ind1=(n/2 )-1 ;
        int ind2= n/2;
        int count=0;
        int ele1=-1;
        int ele2=-1;
        while(i<n1 && j <n2)
        {
            if(arr1[i]<arr2[j])
            {
                if(count==ind1) ele1=arr1[i];
                if(count==ind2) ele2=arr1[i];
                count++;
                i++;
            }
            else
            {
                 if(count==ind1) ele1=arr2[j];
                if(count==ind2) ele2=arr2[j];
                count++;
                j++;
            }
            
        }
        while(i<n1)
        {
           if(count==ind1) ele1=arr1[i];
                if(count==ind2) ele2=arr1[i];
                count++;
                i++; 
        }
        while(j<n2)
        {
             if(count==ind1) ele1=arr2[j];
                if(count==ind2) ele2=arr2[j];
                count++;
                j++;
        }
        if(n%2==1)
        {
            return ele2;
        }

        return (double)(ele1+ele2)/2.0;


    }
};
int main(){
     
return 0;
}