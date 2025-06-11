#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>num(n);
for(int i=0;i<n;i++){
    cin>>num[i];
}
int x=0;
for(int i=0;i<=n;i++){
    x^=i;
}
for(int i=0;i<n;i++){
    x^=num[i];
}
cout<<x;
return 0;
}


