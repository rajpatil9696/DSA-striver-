#include<iostream>
using namespace std;

int main(){

    string str="namam";
    int s=0;
    int e=str.size()-1;

    while (s<e)
    {
     if(str[s]!=str[e]){
        cout<<"this is not palindrome string "<<endl;
        return;
     }
     s++;
     e--;
    }

    cout<<"this is palindrome string "<<endl;

    return 0;
}
 