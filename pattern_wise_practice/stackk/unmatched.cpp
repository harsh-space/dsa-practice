#include <bits/stdc++.h>
using namespace std;
int minSwaps(string s)
{
    stack<char> stk;
    int cnt = 0;
    for (char c : s)
    {
        if (c == '[')
            stk.push(c);
        else
        {
            if (stk.empty())
                cnt++;
            else
                stk.pop();
        }
    }
    // if(!stk.empty())cnt+=stk.size();
    // if(cnt==0)return 0;
    // if(cnt==2||cnt==4)return 1;
    // else return cnt/2-1;
    return (cnt + 1) / 2;
}
int main()
{
    string s = "]]][[[";
    cout << minSwaps(s) << endl;
    return 0;
}