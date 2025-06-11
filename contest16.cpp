#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,c=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int even_mismatch=0,odd_mismatch=0;
for(int i=0;i<n;i++){
    if((i%2)==0&&(a[i]%2)!=0){
        even_mismatch++;
    }
    else if((i%2!=0)&&(a[i]%2)==0){
        odd_mismatch++;
    }
}
if(even_mismatch==odd_mismatch){
    cout<<even_mismatch<<endl;
}
else{
    cout<<-1<<endl;
}}
return 0;
}
