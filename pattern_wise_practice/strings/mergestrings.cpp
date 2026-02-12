#include<bits\stdc++.h>
using namespace std;

string mergeAlternately(string word1, string word2)
{
    int i = 0, j = 0;
    string ns = "";
    while (i < word1.size() && j < word2.size())
    {
        ns += word1[i];
        ns += word2[j];
        i++;
        j++;
    }
    if (i >= word1.size())
    {
        while (j < word2.size())
        {
            ns += word2[j];
            j++;
        }
    }
    else if (j >= word2.size())
    {
        while (i < word1.size())
        {
            ns += word1[i];
            i++;
        }
    }
    return ns;
}

int main(){
    string a="abcsdef";
    string b="pqr";
    string ans=mergeAlternately(a,b);
    cout<<"New string:"<<ans;
    return 0;
}