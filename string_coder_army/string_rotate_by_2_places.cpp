// in this question we have to check whether the string is rotated by 2 places or not 
// it may be rotated clockwise or anticlockwises 

/*
lass Solution {
  public:
    // Function to check if a string can be obtained by rotating
    // another string by exactly 2 places.
 
 void rotateclock(string &s) {
        int n = s.size();
        char ch = s[n - 1];  // Save last character
        for (int i = n - 1; i > 0; i--) {
            s[i] = s[i - 1]; // Shift characters to the right
        }
        s[0] = ch; // Put last char at the beginning
    }

    // Function to rotate a string one step anti-clockwise
    void rotateanti(string &s) {
        int n = s.size();
        char ch = s[0];  // Save first character
        for (int i = 0; i < n - 1; i++) {
            s[i] = s[i + 1]; // Shift characters to the left
        }
        s[n - 1] = ch; // Put first char at the end
    }
    
    bool isRotated(string& s1, string& s2) {
        if(s1.size()!=s2.size()){
            return 0;
        }
        // Your code here
        string clockwise=s1;
        string anticlock=s1;
        
        rotateclock(clockwise);
        rotateclock(clockwise);
        
        if(clockwise==s2){
            return 1 ;
        }
        
        rotateanti(anticlock);
        rotateanti(anticlock);
        
        if(anticlock==s2){
            return 1 ;
        }
        
        return 0;
        
        
    }
};
*/