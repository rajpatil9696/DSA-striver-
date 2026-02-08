// in this question we have to sort string by alphabetical order 
/*
string sort(string s) {
    // complete the function here
    vector<int> alpha(26,0);
    for(int i=0;i<s.size();i++){
        alpha[s[i]-'a']++;
    }
    string ans;
    for(int i=0;i<26;i++){
        char c='a'+i;
        while(alpha[i]){
            ans+=c;
            alpha[i]--;
        }
    }
    
    return ans ;
}
*/
/*
#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int n = str.length();

    // Bubble sort algorithm
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (str[j] > str[j + 1]) {
                // Swap characters
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    cout << "Sorted string: " << str << endl;

    return 0;
}

*/