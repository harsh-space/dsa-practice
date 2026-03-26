#include<bits/stdc++.h>
using namespace std;
bool issafe(int r,int j,vector<string>& bod,int n){
    for(int i=0;i<n;i++){
        if(bod[r][i]=='Q')return false;
    }
    for(int i=0;i<n;i++){
        if(bod[i][j]=='Q')return false;
    }
    for(int i=r,k=j;i>=0 && k>=0;i--,k--){
        if(bod[i][k]=='Q')return false;
    }
    for(int i=r,k=j;i>=0 && k<n;i--,k++){
        if(bod[i][k]=='Q')return false;
    }
    return true;

}

void nqueen(int r,int n,vector<string>& bod,vector<vector<string>>&ans){

    if(r==n){
        ans.push_back({bod});
        return;
    }

    for(int j=0;j<n;j++){
        if(issafe(r,j,bod,n)){
            bod[r][j]='Q';
            nqueen(r+1,n,bod,ans);
            bod[r][j]='.';
        }

    }
}
int main(){
    vector<string>bod={
        "....",
        "....",
        "....",
        "...."
    };
    vector<vector<string>>ans;
    int n=4;
    nqueen(0,4,bod,ans);
    for(auto it:ans){
        for(auto s:it){
            cout<<s;
            cout<<endl;
        }
        cout<<endl;
        cout<<endl;
    }
    return 0;
    
}