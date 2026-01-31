// in this question we have to find the xor between the L and R 
/*
class Solution {
    int fn(int n){   // function to find xor from 1 to n
        if(n%4==1){
            return 1 ;
        }
        else if(n%4==2){
            return n+1;
        }
        else if(n%4==3){
            return 0;
        }
        else if(n%4==0){
            return n;
        }
    }
  public:
    int findXOR(int l, int r) {
        int ansl=fn(l-1);
        int ansr=fn(r);
        
        int ans=ansl^ansr;
        
        return ans ;
    }
};
*/