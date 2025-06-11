#include<iostream>
#include<cstring>
using namespace std;
bool islucky(int n){
string s=to_string(n);
for(char c:s){
    if(c!='7'&&c!='4'){
        return false;
    }
}
return true;
}
int main(){
string n;
cin>>n;
int lc=0;
for(char c:n){
    if(c=='4'||c=='7') lc++;
}
if(islucky(lc)) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}
