#include<iostream>
using namespace std;
bool iscomposite(int x){
if(x<=3) return false;
for(int i=2;i*i<=x;i++){
    if(x%i==0) return true;
}
return false;
}
int main(){
int n;
cin>>n;
for(int i=4;i<n;i++){
    if(iscomposite(i) && iscomposite(n-i)){
        cout<<i<<" "<<n-i<<endl;
        break;
    }
}
return 0;
}
