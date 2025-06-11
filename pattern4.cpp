/*
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
*/
#include<iostream>
using namespace std;
int main(){
int m,n;
cin>>m>>n;
for(int r=1;r<=m;r++){
    for(int c=1;c<=n;c++){
        cout<<c*c<<" ";
    }cout<<endl;
}
return 0;
}
