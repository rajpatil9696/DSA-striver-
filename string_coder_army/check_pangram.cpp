// in this question we have to check whether all the lower case latter are present in the gievn string
// if yes the true if any of the alphabate is not present in the string then mark it as false 
/*
class Solution {
public:
    bool checkIfPangram(string sentence) {
       vector<bool> alpha(26,0);
       for(int i=0;i<sentence.size();i++){
        int index=sentence[i]-'a';
        alpha[index]=1;
       }  

       // iterate over alpha 
       for(int i=0;i<26;i++){
        if(alpha[i]==0){
            return 0;
        }
       }
       return 1;
    }
};
*/