/*
#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int reverse=0;
	while(n>0){
		int digit=n%10;
		reverse=(reverse*10)+digit;
		n=n/10;
	}
	cout<<reverse;
	return 0;
}

*/
// reverse positive as well negative numbers 
/*
class Solution {
public:
    int reverse(int x) {
        int   rev=0;
       int sign= (x>0)?1:-1; // this will store sign of the number 
       x=abs(x); // this will make positive 

       while(x>0){
        int digit=x%10;
        rev=(rev*10)+digit;
        x=x/10;
       }
       return rev*sign;
    }
};
*/