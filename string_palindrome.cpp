#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string str;
    cin>>str;
    int i=0,j=str.size()-1;
    while(i<j){
        if(str[i]!=str[j]){
            cout<<"Not palindrome";
            break;
            
        }
        i++;
        j--;
    }
    if(i>=j) cout<<"Palindrome";

    return 0;
}