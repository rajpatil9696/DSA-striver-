// in this problem we have to rearrange the numbers alternate by positive and negative 
/*
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0); // we define the vector of size n and default value 0
        int posindex=0; // positive numbers are added to even places 
        int negindex=1; // negative numbers are added to odd places 

        for(int i=0 ; i<n ; i++){
            if(nums[i]<0){
                ans[negindex]=nums[i];
                negindex+=2;
            }
            else{
                ans[posindex]=nums[i];
                posindex+=2;
            }
        }
        return ans;
    }
};
*/
// second verity when positive and negatives are not same 
/*
vector<int> alternateNumbers(vector<int>&a) {
    vector<int>pos,neg;
    int n =a.size();

    for(int i=0 ;i<n ;i++){
        if(a[i]>0){
            pos.push_back(a[i]);
        }
        else{
            neg.push_back(a[i]);
        }
    }
    if(pos.size()>neg.size()){
        for(int i=0 ;i<neg.size();i++){
            a[2*i]=pos[i];
            a[2*i+1]=neg[i];
        }
        int index=neg.size()*2;
        for(int i=neg.size();i<pos.size();i++){
            a[index]=pos[i];
            index++;
        }
    }
    else{
         for(int i=0 ;i<pos.size();i++){
            a[2*i]=pos[i];
            a[2*i+1]=neg[i];
        }
        int index=pos.size()*2;
        for(int i=pos.size();i<neg.size();i++){
            a[index]=neg[i];
            index++;
        }

    }
    return a ;
}
*/