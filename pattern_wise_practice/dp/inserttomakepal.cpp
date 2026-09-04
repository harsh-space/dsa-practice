#include <bits/stdc++.h>
using namespace std;

int minInsertionsHelper(const string &s, int l, int h) {

    if (l >= h) {
        return 0;
    }

    if (s[l] == s[h]) {
        return minInsertionsHelper(s, l + 1, h - 1);
    }
    

    return 1 + min(minInsertionsHelper(s, l + 1, h), 
                   minInsertionsHelper(s, l, h - 1));
}

int minInsertions(string s) {
    return minInsertionsHelper(s, 0, s.length() - 1);
}

int main() {
    string s = "mbadm";
    cout << "Minimum Insertions: " << minInsertions(s) << endl; // Output: 2
    return 0;
}
