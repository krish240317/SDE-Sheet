#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  //TC very high 
    bool rotateString(string s, string goal)
    {
        string ans = s + s;
        if (s.length() != goal.length())
        {
            return false;
        }
        //  bool ans=temp.find(goal);
        if (ans.find(goal) == string::npos)
        {
            return false;
        }
        return true;
    }
};

int main()
{

    return 0;
}