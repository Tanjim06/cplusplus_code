#include<iostream>
using namespace std;
bool isprime(int n){
    if(n==0 || n==1){
        return false;
    }
     for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;;
    if(isprime(n-2)){
        cout<<"2 "<<n-2<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}