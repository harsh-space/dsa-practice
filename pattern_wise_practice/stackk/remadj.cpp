#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string s)
{
    stack<char> stk;
    for (char c : s)
    {
        if (!stk.empty() && stk.top() == c)
        {
            stk.pop();
        }
        else
        {
            stk.push(c);
        }
    }
    string result;
    while (!stk.empty())
    {
        result += stk.top();
        stk.pop();
    }
    reverse(result.begin(), result.end());
    return result;
}
int main(){
    string s="abbcddaffg";
    cout<<removeDuplicates(s);
    return 0;
}
