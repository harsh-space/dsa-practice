#include <bits/stdc++.h>
using namespace std;

bool checkValidString(string s)
{
    stack<char> op;
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if (c == '(')
            op.push(i);
        else if (c == '*')
            st.push(i);
        else
        {
            if (!op.empty())
                op.pop();
            else if (!st.empty())
                st.pop();
            else
            {
                return false;
            }
        }
    }
    while (!st.empty() && !op.empty())
    {
        if (op.top() > st.top())
            return false;
        op.pop();
        st.pop();
    }
    return op.empty();
}

int main()
{
    string s = "(*))";
    cout << checkValidString(s) << endl;
    return 0;
}