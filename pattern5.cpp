/*
a a a a a
b b b b b
c c c c c
d d d d d
e e e e e
*/
#include<iostream>
using namespace std;
int main(){
int m,n;
cin>>m>>n;
for(int r=1;r<=m;r++){
    for(int c=1;c<=n;c++){
        int x='a'+c-1;
        cout<<static_cast<char>(x)<<" ";
    }cout<<endl;
}



return 0;
}
