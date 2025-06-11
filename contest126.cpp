#include<iostream>
using namespace std;
int main(){
int x;
cin>>x;
int c=0;
while(x){
x=x&(x-1);
c++;
}
cout<<c;
return 0;
}
