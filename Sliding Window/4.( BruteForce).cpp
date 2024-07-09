#include <bits/stdc++.h>
using namespace std;
int totalFruits(int n, vector<int> &fruits) {
        
        //brute force
        int maxlen=0;
        for(int i=0;i<n;i++)
        {
            set<int> st;
            for(int j=i;j<n;j++)
            {
                 st.insert(fruits[j]);
                if(st.size()>2)
                {
                    break;
                }
                else if (st.size()<=2)
                {
                   
                    maxlen=max(j-i+1,maxlen);
                }
            }
        }
        return maxlen;
    }
int main()
{

    return 0;
}