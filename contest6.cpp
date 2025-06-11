#include<iostream>
using namespace std;
int main(){
int k,n,w,ts=0;
cin>>k>>n>>w;
for(int i=1;i<=w;i++){
    ts += k*i;
}
int amount_to_borrow = ts-n;
if(amount_to_borrow>0){
    cout<<amount_to_borrow;
}
else{
    cout<<"0";
}
return 0;
}
