#include <bits/stdc++.h>
using namespace std;
int minOperations(string s) { 
    int cnt = 0; 
    int n = s.size(); 
    
    for(int i = 0; i < s.size(); i++) { 
        char exp = (i % 2 == 0) ? '0' : '1'; 
        if(s[i] != exp) cnt++; 
    } 
    
    return min(cnt, n - cnt); 
}
int main() {
    string s = "0100";
    
    int result = minOperations(s);
    
    cout << "Minimum operations for \"" << s << "\": " << result << endl;
    
    return 0;
}
