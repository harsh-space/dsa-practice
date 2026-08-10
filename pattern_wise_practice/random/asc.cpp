#include <bits/stdc++.h>
using namespace std;
bool areNumbersAscending(string s)
{
    bool f = true;
    int last = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ' || isalpha(s[i]))
            continue;
        string ns = "";
        while (i < s.size() && !isalpha(s[i]) && !isspace(s[i]))
        {
            ns += s[i];
            i++;
        }
        int n = stoi(ns);
        if (n <= last)
            return false;
        last = n;
    }
    return true;
}
int main()
{
    string s= "1 box has 3 blue 4 red 6 green and 12 yellow marbles";
    cout<<areNumbersAscending(s);
    return 0;
}