#include <bits/stdc++.h>
using namespace std;
string getEncryptedString(string s, int k)
{
    int n = s.length();
    string ns = "";
    for (int i = 0; i < n; ++i)
    {
        ns += s[(i + k) % n];
    }
    return ns;
}

int main()
{
    string s="dart";
    int k=2;
    cout<<getEncryptedString(s,k);
    return 0;
}