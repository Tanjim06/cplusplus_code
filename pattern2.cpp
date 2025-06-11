/*
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
*/
#include<iostream>
using namespace std;
int main(){
int m,n;
cin>>m>>n;
for(int r=1;r<=m;r++){
    for(int c=1;c<=n;c++){
        cout<<c<<" ";
    }cout<<endl;
}


return 0;
}
