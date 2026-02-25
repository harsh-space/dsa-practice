#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s, int k)
{
    vector<pair<char, int>> st;

    for (char c : s)
    {
        if (!st.empty() && st.back().first == c)
        {
            st.back().second++;
        }
        else
        {
            st.push_back({c, 1});
        }

        if (st.back().second == k)
        {
            st.pop_back();
        }
    }

    string res = "";
    for (auto const &p : st)
    {
        res.append(p.second, p.first);
    }

    return res;
}

int main(){
    string s2 = "deeedbbcccbdaa";
    int k2 = 3;
    cout << "Input: " << s2 << ", k: " << k2 << "\nOutput: " << removeDuplicates(s2, k2) << "\n\n";
}