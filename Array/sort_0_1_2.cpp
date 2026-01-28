// in this problem we have to sort the given array in zero , one , two order 
// better solution 
/*
#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
   int czero=0;
   int cone=0;
   int ctwo=0;

   for(int i=0;i<n;i++){
       if(arr[i]==0){
           czero++;
       }
       else if(arr[i]==1){
           cone++;
       }
       else{
           ctwo++;
       }
   }
   for(int i=0 ;i<czero ;i++){
       arr[i]=0;
   }
   for(int i=czero;i<(czero+cone);i++){
       arr[i]=1;
   }
   for(int i=(czero+cone);i<n ;i++){
       arr[i]=2;
   }
}

*/
// optimal solution 
/*
#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
  int low =0 , mid=0 ,high=n-1;
  while(mid<=high){
      if(arr[mid]==0){
          swap(arr[low],arr[mid]);
          low++;
          mid++;
      }
      else if (arr[mid]==1){
          mid++;
      }
      else{
          swap(arr[mid],arr[high]);
          high--;
      }
  }
}

*/