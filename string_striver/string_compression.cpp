#include <bits/stdc++.h>
using namespace std;

string compressString(const string &s) {
    int n = s.size();
    if (n == 0) return "";

    string result = "";
    int count = 1;

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            count++; // increment consecutive count
        } else {
            // append previous character and count if more than 1
            result += s[i - 1];
            if (count > 1) result += to_string(count);
            count = 1; // reset count
        }
    }

    // handle the last character
    result += s[n - 1];
    if (count > 1) result += to_string(count);

    return result;
}

int main() {
    string str = "aaabbcdddde";
    string compressed = compressString(str);
    cout << "Original: " << str << endl;
    cout << "Compressed: " << compressed << endl;

    return 0;
}
