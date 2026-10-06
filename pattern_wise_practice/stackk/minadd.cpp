#include <bits/stdc++.h>
using namespace std;

int minAddToMakeValid(string s)
{
    int cnt = 0;
    stack<char> stk;
    for (char ch : s)
    {
        if (ch == '(')
            stk.push('(');
        else
        {
            if (stk.empty())
                cnt++;
            else
                stk.pop();
        }
    }
    if (!stk.empty())
        cnt += stk.size();
    return cnt;
}

int main()
{
    string s = "())";
    cout << minAddToMakeValid(s);
    return 0;
}
