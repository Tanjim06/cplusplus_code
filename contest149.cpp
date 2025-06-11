#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
   int diff = abs(a - b);
    cout<<(diff+9)/10<<endl;
}
return 0;
}
