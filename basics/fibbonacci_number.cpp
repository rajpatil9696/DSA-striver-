// fibonacci number by iterative method 
/*
#include<bits/stdc++.h>
using namespace std;

int fib(int n){
  int prev = 0, curr = 1;  // Initialize first two Fibonacci numbers
    for (int i = 2; i <= n; i++) {
        int next = prev + curr;  // Calculate next Fibonacci number
        prev = curr;             // Update previous two numbers
        curr = next;
    }
    return curr;
}

int main()
{
        int n;
        cin>>n;
        cout<<fib(n);
}

*/
// recursive method 
/*
class Solution {
public:
    int fib(int n) {
      if(n<=1){
        return n;
      }
      return fib(n-1)+fib(n-2);

    }
};
*/