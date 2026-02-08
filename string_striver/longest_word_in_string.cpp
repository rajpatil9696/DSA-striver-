#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);

    stringstream ss(str);  // break sentence into words
    string word, longestWord;
    int maxLen = 0;

    while (ss >> word) {
        if (word.length() > maxLen) {
            maxLen = word.length();
            longestWord = word;
        }
    }

    cout << "Longest word: " << longestWord << endl;
    cout << "Length: " << maxLen << endl;

    return 0;
}
