#include <bits/stdc++.h>
using namespace std;
string strWithout3a3b(int a, int b)
{
    string s = "";
    int t = 1;
    if (b > a)
        t = 0;

    while (a > 0 || b > 0)
    {
        if (t == 1)
        {
            if (a >= 2 && a > b)
            {
                s += "aa";
                a -= 2;
            }
            else if (a > 0)
            {
                s += 'a';
                a--;
            }
            t = 0;
        }
        else
        {
            if (b >= 2 && b > a)
            {
                s += "bb";
                b -= 2;
            }
            else if (b > 0)
            {
                s += 'b';
                b--;
            }
            t = 1;
        }
    }
    return s;
}
int main()
{
    int a=7,b=9;
    cout<<strWithout3a3b(a,b);

    return 0;
}