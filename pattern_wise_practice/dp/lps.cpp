#include<bits/stdc++.h>
using namespace std;
int lps(int i,int j,string&s){
    if(i>j)return 0;
    if(i==j)return 1;
    if(s[i]==s[j])return 2+lps(i+1,j-1,s);
    return max(lps(i+1,j,s),lps(i,j-1,s));
}
int main(){
    string s="ssabbxcdss";
    int i=0,j=s.size()-1;
    cout<<lps(i,j,s);
    return 0;
}