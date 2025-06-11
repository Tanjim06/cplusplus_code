/*
#include<iostream>
using namespace std;
int main(){
int x;
cin>>x;
if(x%5==0){
    cout<<x/5;
}
else{
    cout<<(x/5)+1;
}
return 0;
}
*/
/*
#include<iostream>
#include<cstring>
using namespace std;
int main(){
int x;
cin>>x;
x = x+1;
string str;
while(true){
    str = std::to_string(x);
    bool isUnique = true;
    for(int i=0;i<str.size();i++){
        for(int j=i+1;j<str.size();j++){
            if(str[i]==str[j]){
                isUnique = false;
                break;
            }
        }
        if(!isUnique){
            break;
        }
    }
    if(isUnique){
        cout<<x;
        break;
    }
    x+=1;
}
return 0;
}
*/

#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int main(){
string str;
cin>>str;
int c = 0;
for(int i=0;i<str.size();i++){
    if(str[i]==toupper(str[i])){
        c+=1;
    }
}
if((str.size()/2)<c){
    for(int i=0;i<str.size();i++){
        str[i] = toupper(str[i]);
    }
}
else{
    for(int i=0;i<str.size();i++){
        str[i] = tolower(str[i]);
    }
}
cout<<str;
return 0;
}
