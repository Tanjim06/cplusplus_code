#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a,b,c;
cin>>a>>b>>c;
if(1<=a && b<=9 && -8<=c<=18){
    if((a+b)==c){
        cout<<"+"<<endl;
    }
    else{
        cout<<"-"<<endl;
    }
}}

return 0;
}
