#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int ans=0;
    while(n--){
        int a,b;
        string s;
        cin>>a>>b>>s;
        if(s=="keep")ans+=b-a;
    }
    cout<<ans;
    return 0;
}
