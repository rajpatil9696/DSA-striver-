// check if two strings are anagram
// anagram strings are strings which have same character but diferent order
/*
class Solution {
public:
    bool isAnagram(string s, string t) {
        // If lengths differ, they can't be anagrams
        if (s.length() != t.length()) return false;

        // Create frequency count array for 26 lowercase letters
        vector<int> count(26, 0);

        // Count characters from s and t
        for (int i = 0; i < s.length(); ++i) {
            count[s[i] - 'a']++;  // increase for s
            count[t[i] - 'a']--;  // decrease for t
        }

        // If all counts are zero, it's an anagram
        for (int c : count) {
            if (c != 0) return false;
        }

        return true;
    }
};

*/
/*
// bruteforce approach 
#include <stdio.h>
#include <string.h>

void sortString(char str[]) {
  int n = strlen(str);
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (str[i] > str[j]) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
      }
    }
  }
}

int areAnagrams(char str1[], char str2[]) {
  if (strlen(str1) != strlen(str2))
    return 0;
  sortString(str1);
  sortString(str2);
  return strcmp(str1, str2) == 0;
}

int main() {
  char str1[] = "listen";
  char str2[] = "silent";
  printf("Are anagrams: %s\n", areAnagrams(str1, str2) ? "Yes" : "No");
  return 0;
}
*/