#include <bits/stdc++.h>
using namespace std;

int rotatedDigits(int n)
{
    int cnt = 0;

    for (int i = 1; i <= n; i++)
    {
        string c = to_string(i);
        if (find(c.begin(), c.end(), '3') != c.end() || find(c.begin(), c.end(), '4') != c.end() || find(c.begin(), c.end(), '7') != c.end())
        {
            continue;
        }
        string s = "";
        for (char i : c)
        {
            if (i == '1' || i == '0' || i == '8')
                s += i;
            else if (i == '2')
                s += '5';
            else if (i == '5')
                s += '2';
            else if (i == '6')
                s += '9';
            else if (i == '9')
                s += '6';
        }
        if (s != c)
            cnt++;
    }
    return cnt;
}

int main()
{
    cout<<rotatedDigits(10);
    return 0;
}