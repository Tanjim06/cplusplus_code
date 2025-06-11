#include<iostream>
#include<algorithm>
using namespace std;
void ltu(string &str,int l){
if(l==-1){
    return;
}
if(str[l]>='a' && str[l]<='z'){
str[l]=str[l]-32;
}
ltu(str,l-1);
}
int main(){
string str="coding";
ltu(str,str.size()-1);
cout<<str;
return 0;
}
