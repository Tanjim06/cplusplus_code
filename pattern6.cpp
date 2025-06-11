/*
1  2  3  4  5
6  7  8  9  10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/
#include<iostream>
using namespace std;
int main(){
int m,n;
cin>>m>>n;
for(int r=1;r<=m;r++){
    for(int c=1;c<=n;c++){
        cout<<(r-1)*5+c<<" ";
    }cout<<endl;
}
return 0;
}
