#include <bits/stdc++.h>
using namespace std;

string removeDigit(string number, char digit)
{
    string maxStr = "";

    for (int i = 0; i < number.size(); ++i)
    {
        if (number[i] == digit)
        {
            string temp = number.substr(0, i) + number.substr(i + 1);
            if (temp > maxStr)
            {
                maxStr = temp;
            }
        }
    }

    return maxStr;
}

int main(){
    string n="2193";
    char d='9';
    cout<<removeDigit(n,d);
    return 0;
}