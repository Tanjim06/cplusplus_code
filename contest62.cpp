#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(str[i]=='1'){
            cout<<"13"<<endl;
            break;
        }
        else if(str[i]=='3'){
            cout<<"31"<<endl;
            break;
        }
    }}
    return 0;
}