#include <bits/stdc++.h>

using namespace std;

void helper(int i, string s, string t, vector<string> &ans)
{
    if (i == s.size())
    {
        ans.push_back(t);
        return;
    }
    if (isdigit(s[i]))
    {
        t.push_back(s[i]);
        helper(i + 1, s, t, ans);
    }
    else
    {
        t.push_back(tolower(s[i]));
        helper(i + 1, s, t, ans);
        t.pop_back();
        t.push_back(toupper(s[i]));

        helper(i + 1, s, t, ans);
    }
}

int main(){
    vector<string> ans;
    string s="a1b2";
    string t = "";
    helper(0, s, t, ans);
    for(auto it:ans){
        cout<<it<<endl;
    }
    return 0;
}
vector<string> letterCasePermutation(string s)
{
    vector<string> ans;
    string t = "";
    helper(0, s, t, ans);
    return ans;
}