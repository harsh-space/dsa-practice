/*
    A - Hell, World!
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Problem Statement:
    You are given an integer X between 1 and 10 (inclusive).

    Output the string obtained by deleting only the X-th character
    from the string "HelloWorld".

    Constraints:
    - 1 <= X <= 10

    Input:
    X

    Output:
    Print the resulting string.

    Sample Input 1:
    5

    Sample Output 1:
    HellWorld

    Sample Input 2:
    9

    Sample Output 2:
    HelloWord

    Sample Input 3:
    1

    Sample Output 3:
    elloWorld
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  n-=1;
  string s="HelloWorld";
  string a="";
  for(int i=0;i<10;i++){
    if(i!=n)a+=s[i];
  }
  cout<<a;
  
  return 0;
}