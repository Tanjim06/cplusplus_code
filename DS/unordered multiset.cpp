#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
unordered_multiset<int> ums;
ums.insert(10);
ums.insert(19);
ums.insert(6);
ums.insert(44);
ums.insert(10);
for(auto v:ums){
    cout<<v<<" ";
}cout<<endl;



return 0;
}
