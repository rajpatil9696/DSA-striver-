#include <iostream>
#include <sstream> // for stringstream
using namespace std;

int countWords(string str) {
    stringstream ss(str);  // put the string into stringstream
    string word;
    int count = 0;

    while (ss >> word) {   // extract words one by one
        count++;
    }
    return count;
}

int main() {
    string text;
    cout << "Enter a sentence: ";
    getline(cin, text); // read full line including spaces

    cout << "Number of words = " << countWords(text) << endl;

    return 0;
}
