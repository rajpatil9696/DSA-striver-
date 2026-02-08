#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    string str="raaaaj";
    int s=0;
    int e=str.size()-1;

    while(s<e){
        swap(str[s],str[e]);
        s++;
        e--;
    }
    cout<<str;

    return 0;
}