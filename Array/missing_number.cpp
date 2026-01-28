// in this problem we have to find the missing number inside the array
/*
int missingNumber(vector<int>&a, int N) {
    // Write your code here.
    int sum=(N*(N+1))/2;

    int s2=0;
    // make addition of all the members in array 
    for(int i=0 ; i<N ;i++){
        s2+=a[i];
    }
    // the final solution is difference between total sum and sum of array
    int ans=sum-s2;

    return ans;
*/
/*
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a, int N) {

    int xor1 = 0, xor2 = 0;

    for (int i = 0; i < N - 1; i++) {
        xor2 = xor2 ^ a[i]; // XOR of array elements
        xor1 = xor1 ^ (i + 1); //XOR up to [1...N-1]
    }
    xor1 = xor1 ^ N; //XOR up to [1...N]

    return (xor1 ^ xor2); // the missing number
}

int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}
*/