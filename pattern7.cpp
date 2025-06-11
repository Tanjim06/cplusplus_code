/*
*
**
***
****
*****
*/

#include<iostream>
using namespace std;
int main(){
int m,n;
cin>>m>>n;
for(int r=1;r<=m;r++){
    for(int c=1;c<=r;c++){
        cout<<"*"<<" ";
    }cout<<endl;
}


return 0;
}
