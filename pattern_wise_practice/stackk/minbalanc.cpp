#include<bits/stdc++.h>
using namespace std;

int minInsertions(string s)
{
    stack<char> stk;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            stk.push(s[i]);
        }
        else
        {
            if (i + 1 <= s.size() - 1 && s[i + 1] == ')')
            {
                if (stk.empty())
                {
                    cnt++;
                }
                else
                {
                    stk.pop();
                }
                i++;
            }
            else
            {
                if (stk.empty())
                {
                    cnt += 2;
                }
                else
                {
                    cnt++;
                    stk.pop();
                }
            }
        }
    }
    if (stk.empty())
        return cnt;
    return cnt + stk.size() * 2;
}
int main()
{
    string s = "(()))";
    cout << minInsertions(s) << endl;
    return 0;
}