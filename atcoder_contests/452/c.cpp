/*
    C - Fishbones
    Time Limit: 2 sec / Memory Limit: 1024 MiB

    Score : 300 points

    Problem Statement
    -----------------
    Artist Takasago has created an object in the shape of a fish skeleton.

    The object consists of N ribs and one spine.
    The ribs are numbered 1 through N.

    He wants to write one string on each of the N+1 bones,
    satisfying all of the following conditions.

    Conditions
    ----------
    - The length of the string written on the spine is N.

    - For each rib i = 1, 2, ..., N:
        * The length of the string written on rib i is A_i.
        * The B_i-th character of the string written on rib i
        equals the i-th character of the string written on the spine.

    - Each of the strings written on the N+1 bones is one of:
        S_1, S_2, ..., S_M
    (duplicates allowed).

    - S_1, S_2, ..., S_M are strings consisting of lowercase
    English letters, and they are all distinct.

    For each j = 1, 2, ..., M, answer the following question:

        Among the ways to write strings satisfying the conditions,
        is there one where the string written on the spine is S_j ?

    Constraints
    -----------
    - N is an integer.
    - 1 ≤ N ≤ 10

    - A_i and B_i are integers. (1 ≤ i ≤ N)
    - 1 ≤ B_i ≤ A_i ≤ 10

    - M is an integer.
    - 1 ≤ M ≤ 200000

    - S_j is a string consisting of lowercase English letters.
    - 1 ≤ |S_j| ≤ 10

    - S_1, S_2, ..., S_M are pairwise distinct.

    Input
    -----
    The input is given from Standard Input in the following format:

        N
        A_1 B_1
        ...
        A_N B_N
        M
        S_1
        ...
        S_M

    Output
    ------
    Output M lines.

    The j-th line (1 ≤ j ≤ M) should contain:

        "Yes"
            if there exists a way to write strings satisfying
            the conditions with S_j written on the spine.

        "No"
            otherwise.

    Sample Input 1
    --------------
    5
    5 3
    5 2
    4 1
    5 1
    3 2
    8
    retro
    chris
    itchy
    tuna
    crab
    rock
    cod
    ash

    Sample Output 1
    ---------------
    Yes
    Yes
    No
    No
    No
    No
    No
    No

    Explanation
    -----------
    By writing:

        - chris
        - retro
        - tuna
        - retro
        - cod

    on ribs 1, 2, 3, 4, 5 respectively,
    the conditions are satisfied with "retro" written on the spine.

    Details:
        - The length of "retro" is 5.

        - For each rib:
            * Rib 1:
                "chris" has length 5,
                and its 3rd character is 'r',
                which equals the 1st character of "retro".

            * Rib 2:
                "retro" has length 5,
                and its 2nd character is 'e',
                which equals the 2nd character of "retro".

            * Rib 3:
                "tuna" has length 4,
                and its 1st character is 't',
                which equals the 3rd character of "retro".

            * Rib 4:
                "retro" has length 5,
                and its 1st character is 'r',
                which equals the 4th character of "retro".

            * Rib 5:
                "cod" has length 3,
                and its 2nd character is 'o',
                which equals the 5th character of "retro".

    By writing:

        - itchy
        - chris
        - rock
        - itchy
        - ash

    on ribs 1, 2, 3, 4, 5 respectively,
    the conditions are satisfied with "chris" written on the spine.


    Sample Input 2
    --------------
    5
    5 1
    5 2
    5 3
    5 4
    5 5
    8
    retro
    chris
    itchy
    tuna
    crab
    rock
    cod
    ash

    Sample Output 2
    ---------------
    Yes
    Yes
    Yes
    No
    No
    No
    No
    No
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  vector<int>a(n,0),b(n,0);
  for(int i=0;i<n;i++){
    cin>>a[i]>>b[i];
  }
  int m;
  cin>>m;
  unordered_map<string,int>mp;
  vector<string>word(m,"");
  for(int i=0;i<m;i++){
    cin>>word[i];
    mp[word[i]]=word[i].size();
  }
  
  for(int i=0;i<m;i++){
    if(word[i].size()==n){
      string temp=word[i];
      bool all_ribs_valid = true;
      
      for(int j=0;j<n;j++){
        bool current_rib_satisfied = false; 
        
        for(auto it:mp){
          if(it.second==a[j] && it.first[b[j] - 1]==temp[j]){
            current_rib_satisfied = true;
            break; 
          }
        }
        if(!current_rib_satisfied){
          all_ribs_valid = false;
          break; 
        }
      }
      if(all_ribs_valid) cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
    }
    else {
      cout<<"No"<<endl;
    }
  }
  return 0;
}
