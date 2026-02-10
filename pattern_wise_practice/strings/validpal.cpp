#include<bits/stdc++.h>

using namespace std;

bool palcheck(int i, int j, string s) {
    while (i <= j) {
        if (s[i] == s[j]) {
            i++;
            j--;
        }
        else return false;
    }
    return true;
}

bool validPalindrome(string s) {
    int i = 0, j = s.size() - 1;

    while (i <= j) {
        if (s[i] == s[j]) {
            i++;
            j--;
        }
        else {
            return palcheck(i + 1, j, s) || palcheck(i, j - 1, s);
        }
    }
    return true;
}

int main() {
    string s;
    if (cin >> s) {
        cout << (validPalindrome(s) ? "true" : "false") << endl;
    }
    return 0;
}