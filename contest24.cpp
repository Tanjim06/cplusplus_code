#include<iostream>
#include<cstring>
using namespace std;
int main(){
int n;
string odd= "I hate";
string even= "I love";
cin>>n;
for(int i=1;i<=n;i++){
    if(i%2!=0){
        if(i!=n){
        cout<<odd<<" that"<<" ";
        }
        else{
        cout<<odd<<" it"<<" ";
        }
    }
    else{
        if(i!=n){
        cout<<even<<" that"<<" ";
        }
        else{
        cout<<even<<" it"<<" ";
        }
    }
}
return 0;
}
