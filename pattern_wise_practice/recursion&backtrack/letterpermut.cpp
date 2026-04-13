#include <bits/stdc++.h>

using namespace std;

void generatePermutations(string S, int i, vector<string>& ans) {
   
    if (i == S.size()) {
        ans.push_back(S);
        return;
    }

    if (isalpha(S[i])) {
        
        S[i] = toupper(S[i]);
        generatePermutations(S, i + 1, ans);

        S[i] = tolower(S[i]);
        generatePermutations(S, i + 1, ans);
    } else {
        
        generatePermutations(S, i + 1, ans);
    }
}

int main() {
    string input = "a1b2";
    vector<string> result;

    generatePermutations(input, 0, result);
    cout << "Permutations for " << input << ":" << endl;
    for (string s : result) {
        cout << s << " ";
    }

    return 0;
}
