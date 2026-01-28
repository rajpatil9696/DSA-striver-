// in this problem we ahve to findout wheather the array have two elements that have sum equal to gjven target
/*
#include<map>
string read(int n, vector<int> book, int target)
{
    map<int,int>mapp;

    for(int i=0 ;i<n ;i++){
        int a=book[i];
        int more=target-a;
        if(mapp.find(more) != mapp.end()){
            return "YES";
        }
        mapp[a]=i;
    }
    return "NO";
}

*/

// optimal solution 
/*
#include<map>
string read(int n, vector<int> book, int target)
{
    int left =0 , right=n-1;
    sort(book.begin() ,book.end());

    while(left<right){
        int sum=book[left]+book[right];

    if(sum==target){
        return "YES";
    }
    else if(sum<target){
        left++;
    }
    else{
        right--;
    }
    }
    
   return "NO";
}

*/

// leetcode solution 
/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mapp;
        int n=nums.size();
        for(int i=0 ;i<n ;i++){
            int num=nums[i];
            int moreneeded=target-num;

            if(mapp.find(moreneeded)!=mapp.end()){
                return {mapp[moreneeded],i};
            }
            mapp[num]=i;
        }
            return {-1,-1};
    }
};
*/