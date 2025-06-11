#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
   int c=0;
   while(n>0){
        n>>=1;
        c++;
   }
   cout<<(1<<(c-1))-1<<endl;

}


return 0;
}
