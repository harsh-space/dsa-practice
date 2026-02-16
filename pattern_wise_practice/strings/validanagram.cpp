#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t)
{

    vector<int> freq(26, 0);

    for (char c : s)
        freq[c - 'a']++;
    for (char c : t)
        freq[c - 'a']--;

    for (int x : freq)
    {
        if (x != 0)
            return false;
    }

    return true;
}
int main(){
    string s1="hihello",s="heslilo";
    string ans=isAnagram(s1,s)?"Yes":"No";
    cout<<ans;
    return 0;
}