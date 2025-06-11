#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
void reversestring(string &str,int s,int e){
if(s>=e){
    return;
}
swap(str[s],str[e]);
reversestring(str,s+1,e-1);
}
int main(){

string str="coding";
reversestring(str,0,str.size()-1);
cout<<str;
return 0;
}
