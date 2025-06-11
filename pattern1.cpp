/*
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
*/
#include<iostream>
using namespace std;
int main(){
int m,n;
cin>>m>>n;
for(int r=1;r<=m;r++){
    for(int c=1;c<=n;c++){
        cout<<r<<" ";
    }cout<<endl;
}


return 0;
}
