#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n==0 || n==1){
            cout<<"Number is not prime";
            break;
        }
        if(n%i==0){
            cout<<"Number is not prime"<<endl;
            break;
        }
        cout<<"Number is prime"<<endl;
        break;
    }

    return 0;
}