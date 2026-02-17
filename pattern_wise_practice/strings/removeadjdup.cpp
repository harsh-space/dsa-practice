#include <bits/stdc++.h>
using namespace std;
string removedup(string &s)
{
    string result = "";
    stack<char> stk;
    for (char c : s)
    {
        if (!stk.empty() && stk.top() == c)
            stk.pop();
        else
            stk.push(c);
    }
    while (!stk.empty())
    {
        result += stk.top();
        stk.pop();
    }
    reverse(result.begin(), result.end());
    return result;
}
int main()
{
    string inp = "abbaca";
    cout << removedup(inp);
    return 0;
}