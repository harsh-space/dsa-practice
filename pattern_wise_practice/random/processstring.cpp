#include <bits/stdc++.h>
using namespace std;

string processStr(string s)
{
    string ans = "";
    for (char c : s)
    {
        if (islower(c))
            ans.push_back(c);
        else if (c == '*')
        {
            if (!ans.empty())
                ans.pop_back();
        }
        else if (c == '#')
        {
            ans = ans + ans;
        }
        else if ('%')
        {
            reverse(ans.begin(), ans.end());
        }
    }
    return ans;
}
int main()
{
    string s="a#b%*";
    cout<<processStr(s);
    return 0;
}