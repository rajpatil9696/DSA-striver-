// in this question we have to find the largest odd number int  the sting 
/*
class Solution {
public:
    string largestOddNumber(string num) {
        // Start from the end of the string and move backwards
        for (int i = num.size() - 1; i >= 0; i--) {
            char ch = num[i];
            if ((ch - '0') % 2 == 1) { // Check if digit is odd
                return num.substr(0, i+1); // Return substring from 0 to i
            }
        }
        // If no odd digit is found, return empty string
        return "";
    }
};

*/