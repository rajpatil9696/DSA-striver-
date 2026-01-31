// in this question we have to find the number of bits we need to chnage for going from start to goal 
/*
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans=start^goal;
        int count=0;
        while(ans!=0){
            ans=ans&(ans-1);
            count++;
        }

        return count;
    }
};
*/