#include<bits/stdc++.h>

using namespace std;

int helper(string s,int i,int j){
    if(i>j)return 0;
    if(i==j)return 1;
    if(s[i]==s[j]){
        return 2+helper(s,i+1,j-1);
    }
    return max(helper(s,i+1,j),helper(s,i,j-1));
}
int main(){
    string s="aabcdeecdar";
    int ans=helper(s,0,s.size()-1);
    cout<<ans;
    return 0;
}