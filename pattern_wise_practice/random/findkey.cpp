#include <bits/stdc++.h>
using namespace std;
int generateKey(int num1, int num2, int num3)
{
    string n1 = to_string(num1);
    if (num1 < 1000)
    {
        int n = 4 - n1.size();
        while (n--)
            n1 = "0" + n1;
    }
    string n2 = to_string(num2);
    if (num2 < 1000)
    {
        int n = 4 - n2.size();
        while (n--)
            n2 = "0" + n2;
    }
    string n3 = to_string(num3);
    if (num3 < 1000)
    {
        int n = 4 - n3.size();
        while (n--)
            n3 = "0" + n3;
    }
    string ans = "0000";
    for (int i = 1; i <= 4; i++)
    {
        ans[i - 1] = min({n1[i - 1] - '0', n3[i - 1] - '0', n2[i - 1] - '0'}) + '0';
    }
    return stoi(ans);
}


int main()
{
    int num1 = 1234, num2 = 5678, num3 = 9012;
    cout << generateKey(num1, num2, num3) << endl;
    return 0;
}