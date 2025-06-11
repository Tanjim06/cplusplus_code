#include<iostream>
#include<cstring>
using namespace std;
int main(){

string str;
cin>>str;
for(int i=0;i<str.size();i+=2){
    for(int j=i+2;j<str.size();j+=2){
        if(str[i]>str[j]){
            swap(str[j],str[i]);
    }
    }
}
cout<<str;


return 0;
}
