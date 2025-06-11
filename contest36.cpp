#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,c=0;
cin>>n;
string s;
cin>>s;
vector<int> arr(26, 0);
for(int i=0;i<n;i++){
   if(arr[s[i]-'A']==0){
        c+=2;
        arr[s[i]-'A']++;
   }
   else{
        c++;
   }
}
cout<<c<<endl;
}
return 0;
}

