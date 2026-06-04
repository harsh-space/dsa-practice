
#include <bits/stdc++.h>
using namespace std;

int fwave(int &n)
{

    string s = to_string(n);
    if (s.size() < 3)
        return 0;
    int p = 0, v = 0;
    for (int i = 1; i < s.size() - 1; i++)
    {
        if (s[i] > s[i + 1] && s[i] > s[i - 1])
            p++;
        if (s[i] < s[i + 1] && s[i] < s[i - 1])
            v++;
    }
    return p + v;
}
int totalWaviness(int num1, int num2)
{
    int s = 0;
    for (int i = num1; i <= num2; i++)
    {
        s += fwave(i);
    }
    return s;
}

int main()
{
    int l = 242, r = 250;
    cout << totalWaviness(l,r);
    return 0;
}