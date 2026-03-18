#include <bits/stdc++.h>
using namespace std;
string commonprefix(vector<string> &strs)
{
    sort(strs.begin(), strs.end());
    string s = "";
    int i = 0, len = strs.size();
    while (i < strs[0].size())
    {
        if (strs[0][i] == strs[len - 1][i])
            s += strs[0][i];
        else
            break;
        i++;
    }
    return s;
}
int main()
{
    vector<string> a = {"flower", "flow", "flight"};
    cout << commonprefix(a);
    return 0;
}