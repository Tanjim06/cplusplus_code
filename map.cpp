#include<iostream>
#include<map>
#include<cstring>
using namespace std;
int main(){
map<string,int> directory;
directory["alex"]=65456;
directory["wolf"]=87894;
directory["warner"]=31254;
directory["dimitri"]=28785;
directory["jack"]=39817;

for(auto ele:directory){
    cout<<"Name "<<ele.first<<endl;
    cout<<"Contact "<<ele.second<<endl;
}cout<<endl;
//using for loop to traverse
map<string,int>::iterator itr;
for(itr=directory.begin();itr!=directory.end();itr++){
    cout<<itr->first<<" "<<itr->second<<endl;
}
return 0;
}
