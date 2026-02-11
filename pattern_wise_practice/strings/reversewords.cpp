#include <bits/stdc++.h>

using namespace std;

string reverseWords(string s) {
    vector<string> words;
    string word = "";
    
    for (char c : s) {
        if (c != ' ') {
            word += c;
        } else if (!word.empty()) {
            words.push_back(word);
            word = "";
        }
    }
    if (!word.empty()) words.push_back(word);

    reverse(words.begin(), words.end());

    string result = "";
    for (int i = 0; i < words.size(); i++) {
        result += words[i];
        if (i != words.size() - 1) result += " ";
    }
    
    return result;
}

int main() {
    string test1 = "the sky is blue";
    cout << "Test 1: '" << reverseWords(test1) << "'" << endl;
    return 0;
}