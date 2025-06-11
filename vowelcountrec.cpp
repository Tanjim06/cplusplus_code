#include<iostream>
using namespace std;
int checkvowel(string str,int idx){
if(idx==-1){
    return 0;
}
if(str[idx]=='a' || str[idx]=='e' || str[idx]=='i' || str[idx]=='o' || str[idx]=='u'){
    return 1+checkvowel(str,idx-1);
}
else{
    return checkvowel(str,idx-1);
}
}
int main(){
string str="tanjim";
int c=0;
cout<<checkvowel(str,str.size()-1);

return 0;
}
