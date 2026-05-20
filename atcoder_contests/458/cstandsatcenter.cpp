/*C - C Stands for Center  / 
Time Limit: 2 sec / Memory Limit: 1024 MiB

Score : 
300 points

Problem Statement
You are given a string 
S consisting of uppercase English letters.
Find the number of substrings (contiguous subsequences) of 
S that satisfy all of the following conditions.

It consists of an odd number of characters.
Its middle character is C. More formally, if the extracted substring consists of 
l characters, its 
((l+1)/2)-th character is C.
Even if two substrings are identical as strings, they are counted separately if they are extracted from different positions.

Constraints
S is a string consisting of uppercase English letters with length between 
1 and 
5×10 
5
 , inclusive.
Input
The input is given from Standard Input in the following format:

S
Output
Output the answer.

Sample Input 1
ABCCA
Sample Output 1
5
In this input, 
S= ABCCA.
The substrings satisfying the conditions in the problem statement are the following five:

ABCCA, extracted from the 
1st to 
5th characters of 
S
BCC, extracted from the 
2nd to 
4th characters of 
S
C, extracted from the 
3rd to 
3rd characters of 
S
CCA, extracted from the 
3rd to 
5th characters of 
S
C, extracted from the 
4th to 
4th characters of 
S
Sample Input 2
XYZ
Sample Output 2
0
Sample Input 3
SMBCPROGRAMMINGCONTEST
Sample Output 3
11*/

/*
#include<bits/stdc++.h>
using namespace std;
int catcenter(const string&s){
    int cnt=0;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='C'){
            cnt++;
            int j=i,k=i;
            while(j-1>=0 && k+1<n && k-j+1%2!=0){
                j--;
                k++;
                cnt++;
            }
        }
    }
    return cnt;
}
int main(){
    string s;
    cin>>s;
    cout<<catcenter(s);
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

long long catcenter(const string &s) {
    long long cnt = 0;
    int n = s.size();

    for (int i = 0; i < n; i++) {
        if (s[i] == 'C') {
            cnt += 1LL + min(i, n - i - 1);
        }
    }

    return cnt;
}

int main() {
    string s;
    cin >> s;

    cout << catcenter(s);
    return 0;
}