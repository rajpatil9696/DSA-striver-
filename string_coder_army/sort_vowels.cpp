// in this question we have given a string which contains both lower and upper casse latters 
// we have to sort the given vowels based on ASCIII value 
// eg lEetcOde ans =lEOtcede
/*
class Solution {
public:
    string sortVowels(string s) {
     vector<int> lower(26,0);
     vector<int> upper(26,0);
     
     // insert the lower and upper vowels inside the vector 
     for(int i=0;i<s.size();i++){
        // lower a e i o u 
        if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u'){
           lower[s[i]-'a']++; 
           s[i]='#';
        }
        // upper A E I O U 
        if(s[i]=='A' || s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U'){
           upper[s[i]-'A']++; 
           s[i]='#';
        }
     }   
        string vowel ;
        // upper 
        for(int i=0;i<26;i++){
            char c='A'+i;
            while(upper[i]){
                vowel+=c;
                upper[i]--;
            }
        }
        // lower 
        for(int i=0;i<26;i++){
            char c='a'+i;
            while(lower[i]){
                vowel+=c;
                lower[i]--;
            }
        }

        // insert in the  original string 
        int first =0 ;
        int second =0;
        while(second<vowel.size()){
            if(s[first]=='#'){
               s[first]=vowel[second];
               second++; 
            }
            first++;
        }

        return s ;
    }
};
*/