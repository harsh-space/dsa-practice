#include <bits/stdc++.h>
using namespace std;
int compress(vector<char> &chars)
{
    int i = 0;
    int j = 0;
    string s = "";
    while (i <= j && j < chars.size())
    {
        if (chars[j] == chars[i])
        {
            j++;
        }
        else
        {
            s += chars[i];
            if (j - i > 1)
            {
                string n = to_string(j - i);
                s += n;
            }
            i = j;
        }
    }
    s += chars[i];
    if (j - i > 1)
    {
        string n = to_string(j - i);
        s += n;
    }
    i=0;
    for(auto &c:s){
        chars[i]=c;
        i++;
    }
    chars.erase(chars.begin()+i,chars.end());
    return chars.size();
}
int main()
{
    vector<char> v = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    cout << compress(v);

    return 0;
}