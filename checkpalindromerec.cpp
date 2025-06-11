#include<iostream>
#include<cstring>
using namespace std;
bool checkpal(string str,int s,int e){
if(s>=e){
    return 1;
}
if(str[s]!=str[e]){
    return 0;
}
return checkpal(str,s+1,e-1);
}
int main(){
string s="mom";
cout<<checkpal(s,0,s.size()-1);
return 0;
}
