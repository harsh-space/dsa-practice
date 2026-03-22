#include <bits/stdc++.h>
using namespace std;

int countw(string &s)
{
    if (s.empty())
        return 0;
    int spaces = 0;
    for (char c : s)
    {
        if (c == ' ')
            spaces++;
    }
    return spaces + 1;
}
string largestWordCount(vector<string> &messages, vector<string> &senders)
{
    unordered_map<string, int> mp;
    for (int i = 0; i < senders.size(); i++)
    {
        int cnt = countw(messages[i]);
        mp[senders[i]] += cnt;
    }
    int cnt = 0;
    string us = "";
    for (auto it : mp)
    {
        if (it.second > cnt)
        {
            cnt = max(cnt, it.second);
            us = it.first;
        }
        else if (it.second == cnt)
        {
            us = (us > it.first) ? us : it.first;
        }
    }
    return us;
}

int main(){
    vector<string>m={"Hello userTwooo","Hi userThree","Wonderful day Alice","Nice day userThree"};
    vector<string>s={"Alice","userTwo","userThree","Alice"};
    cout<<largestWordCount(m,s);
    return 0;
}