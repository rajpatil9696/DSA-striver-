// in this question we have to find that if the given string is the rotated version of rthe goal string 
/*
class Solution {
public:
    bool rotateString(string s, string goal) {
        // If lengths are not equal, they can't be rotations
        if (s.length() != goal.length()) {
            return false;
        }

        // Create a new string by appending s to itself
        string doubled = s + s;

        // Check if goal is a substring of the doubled string
        if (doubled.find(goal) != string::npos) {
            return true;
        } else {
            return false;
        }
    }
};

*/