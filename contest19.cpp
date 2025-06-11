#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
bool flag=false;
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
        if(a[i]==1){
        flag=true;
        break;
    }
    else{
        flag=false;
    }
}
if(flag==true){
    cout<<"Hard"<<endl;
}
else{
    cout<<"Easy"<<endl;
}
return 0;
}
