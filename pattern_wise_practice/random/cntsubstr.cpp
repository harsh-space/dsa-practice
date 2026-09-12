#include <bits/stdc++.h>
using namespace std;

long long countSubstrings(string s, char c) { 
    long long cnt = 0; 
    for(char it : s) { 
        if(it == c) cnt++; 
    } 
    return (cnt * (cnt + 1)) / 2; 
}

int main() {
    
    string str1 = "abada";
    char ch1 = 'a';
    cout << "String: \"" << str1 << "\", Character: '" << ch1 << "'\n";
    cout << "Total Substrings: " << countSubstrings(str1, ch1) << "\n\n";
    return 0;
}
