#include <bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s)
{
    set<int> pos;
    stack<char> stk;

    int i = 0;
    int j = 0;
    for (int k = 0; k < s.size(); k++)
    {
        if (s[k] == '(')
            stk.push(s[k]);
        else
        {
            stk.pop();
            if (!stk.empty())
                continue;
            else
            {
                j = k;
                pos.insert(i);
                pos.insert(j);
                i = k + 1;
                j = i;
            }
        }
    }
    string ns = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (pos.find(i) != pos.end())
            continue;
        else
            ns += s[i];
    }
    return ns;
}
int main()
{
    string s = "(()())(())";
    cout << removeOuterParentheses(s) << endl;
    return 0;
}