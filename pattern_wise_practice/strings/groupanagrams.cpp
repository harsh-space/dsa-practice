#include<bits/stdc++.h>
using namespace std;
vector<vector<string>> groupanagrams(vector<string>&words){
    vector<vector<string>>ans;
    unordered_map<string,vector<string>>mp;
    for(auto it:words){
        string toseacrh=it;
        sort(toseacrh.begin(),toseacrh.end());
        mp[toseacrh].push_back(it);
    }
    for(auto it:mp){
        ans.push_back(it.second);
    }
    return ans;
}
int main(){
    vector<string>arr={"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>>ans=groupanagrams(arr);
    cout<<"[";
    for(auto it:ans){
        cout<<"[";
        for(auto s:it){
            cout<<s<<" ";
        }
        cout<<"]";
    }
    cout<<"]";
    return 0;
}