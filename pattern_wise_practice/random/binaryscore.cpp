#include<bits/stdc++.h>
using namespace std;

int setbits(int n){
    int cnt=0;
    while(n>0){
        int b=n%2;
        if(b==1)cnt++;
        n/=2;
    }
    return cnt;

}

int main(){
    int n,m;
    cin>>n>>m;
    int setb1=setbits(n);
    int setb2=setbits(m);
    if(setb1>=setb2){
        cout<<setb1*setb2;
        return 0;
    }
    else{
        cout<< setb2/setb1;
        return 0;
    }
    return 0;
}