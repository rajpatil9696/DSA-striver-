// // in this code we have to find the second largest and second smallest integer from the array 
// int secondLargest(vector<int> &a , int n){
//     int largest=a[0];
//     int slargest=-1;

//     for(int i=1 ;i<n;i++){
//         if(a[i]>largest){
//             // if a[i] is larger the largest the replace it with largest 
//             // and also replace largest with second largest
//             slargest=largest;
//             largest=a[i];
//         }
//         else if(a[i]<largest && a[i]>slargest){
//             slargest=a[i];
//         }
//     }
//      return slargest;
// }
// int secondSmallest(vector<int> &a , int n){
//     int smallest=a[0];
//     int ssmallest=INT_MAX;
//     // if the a[i] is smaller than the smallest the make a[i] as smallest 
//     // and also make smallest as a second smallest 
//     for(int i=1 ; i<n ;i++){
//         if(a[i]<smallest){
//             ssmallest=smallest;
//             smallest=a[i];
//         }
//         else if (a[i]!=smallest && a[i]<ssmallest ){
//             ssmallest=a[i];
//         }
//     }

//     return ssmallest;
// }

// vector<int> getSecondOrderElements(int n, vector<int> a) {
//     int slargest=secondLargest(a,n);
//     int ssmallest=secondSmallest(a,n);
    
//     vector<int> ans;
//     ans.push_back(slargest);
//     ans.push_back(ssmallest);

//     return ans;
// }
