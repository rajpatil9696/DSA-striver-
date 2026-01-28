// in this question we have to move the zeros to the right of the array ;
// brute force approch
// vector<int> moveZeros(int n, vector<int> a) {
//     // Write your code here.
//     vector<int>temp;
//     // first we have to add the non zero numbers inside the temp array
//     for(int i=0 ;i<n ;i++ ){
//       if(a[i]!=0){
//           temp.push_back(a[i]);
//       }
//     }
//     //then add all the non zero numbers to the main array 
//     int s=temp.size() ; // this will be the size of temp array / it is number of non zero elements 
//     for(int i=0 ;i<s ;i++){
//         a[i]=temp[i];
//     }
//     // then fot the zero elements assign the values to 0
//     for(int i=s ; i<n ;i++){
//         a[i]=0;
//     }

//     return a;
// }   
 
 // optimal solution 
 /*
 vector<int> moveZeros(int n, vector<int> a) {
   int j=-1; // initially j is -1  
   for(int i=0 ;i<n ;i++){  // this looop checks for first 0 and make the j as that place 
       if(a[i]==0){
           j=i;
           break;
       }
   }
   // no non zero numbers 
   if(j==-1) return a ;

   for(int i=j+1 ; i<n ;i++){  // then loop through the array and check if the i is nonzero and j is zero then swap it 
       if(a[i]!=0){
           swap(a[i],a[j]);
            j++;   
       }
   }

   return a;

}  
 */
/*
// optimal solution 
class Solution {
public:
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int lastNonZeroIndex = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[lastNonZeroIndex]);
                lastNonZeroIndex++;
            }
        }
    }
};


*/