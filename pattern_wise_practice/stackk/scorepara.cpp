#include <bits/stdc++.h>
using namespace std;
int scoreOfParentheses(string s)
{
    stack<int> stk;
    int i = 0;
    while (i < s.size())
    {
        if (s[i] == '(')
            stk.push(-1);
        else
        {
            if (stk.top() == -1)
            {
                stk.pop();
                stk.push(1);
            }
            else
            {
                int ans = 0;
                while (stk.top() != -1)
                {
                    ans += stk.top();
                    stk.pop();
                }
                ans = 2 * ans;
                stk.pop();
                stk.push(ans);
            }
        }
        i++;
    }
    int res = 0;
    while (!stk.empty())
    {
        res += stk.top();
        stk.pop();
    }
    return res;
}
int main()
{
    string s = "(()(()))";
    cout << scoreOfParentheses(s);
    return 0;
}