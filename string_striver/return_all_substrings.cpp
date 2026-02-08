/*
#include <iostream>
#include <vector>
using namespace std;

vector<string> getAllSubstrings(string s) {
    vector<string> substrings;
    int n = s.length();

    for (int i = 0; i < n; ++i) {
        string sub = "";
        for (int j = i; j < n; ++j) {
            sub += s[j];
            substrings.push_back(sub);
        }
    }

    return substrings;
}

int main() {
    string s = "abc";
    vector<string> result = getAllSubstrings(s);

    cout << "All substrings of \"" << s << "\":" << endl;
    for (const string& str : result) {
        cout << str << endl;
    }

    return 0;
}


*/