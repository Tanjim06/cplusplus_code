#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        double a,b;
        cin>>a>>b;
        cout<<fixed<<setprecision(15)<<a/b<<endl;
    }
    return 0;
}