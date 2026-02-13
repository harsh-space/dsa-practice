#include <bits/stdc++.h>
using namespace std;

bool check(unordered_map<char, int> &newmp, unordered_map<char, int> &og)
{
    // if(newmp.size() != og.size()) return false;
    for (auto it : newmp)
    {
        if (og[it.first] != it.second)
            return false;
    }
    return true;
}
vector<int> findAnagrams(string s, string p)
{
    vector<int> ans;
    int n = s.size();
    int k = p.size();
    if (k > n)
        return ans;
    unordered_map<char, int> og, newmp;
    for (char c : p)
        og[c]++;

    int l = 0;
    for (int i = 0; i < k; i++)
    {
        newmp[s[i]]++;
    }
    for (int i = k; i < n; i++)
    {
        if (check(newmp, og))
            ans.push_back(l);
        newmp[s[i]]++;
        newmp[s[l]]--;
        if (newmp[s[l]] == 0)
            newmp.erase(s[l]);
        l++;
    }
    if (check(newmp, og))
        ans.push_back(l);
    return ans;
}
int main(){
    string s, p;
    cout << "Enter string s: ";
    cin >> s;
    cout << "Enter string p: ";
    cin >> p;
    vector<int> result = findAnagrams(s, p);
    cout << "Anagram indices: [";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1)
            cout << ", ";
    }
    cout << "]" << endl;
    return 0;
}