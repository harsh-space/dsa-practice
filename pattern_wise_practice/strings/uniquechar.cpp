#include<bits/stdc++.h>
using namespace std;
char firstuni(string &s){
    unordered_map<char,int>mp;
    for(auto it:s)mp[it]++;
     for (auto it : s) {
        if (mp[it] == 1) return it;
    }
    return 'N';
}
int main(){
    string s="aabbcddfgc";

    cout<<firstuni(s);

    return 0;
}