#include<iostream>
#include<set>
using namespace std;
int main(){
set<int> s1;
//set<int,greater<int>> s1;
s1.insert(1);
s1.insert(2);
s1.insert(3);
s1.insert(4);
s1.insert(5);
s1.insert(6);
s1.insert(7);
//cout<<s1.size();
//traversal in set
set<int>::iterator itr;
for(itr=s1.begin();itr!=s1.end();itr++){
    cout<<*itr<<" ";
}cout<<endl;
//using for each
for(auto value:s1){
    cout<<value<<" ";
}cout<<endl;
s1.erase(4);
cout<<"after removing 4"<<endl;
for(auto value:s1){
    cout<<value<<" ";
}cout<<endl;
auto itr2 = s1.begin();
advance(itr2,2);
s1.erase(itr2);
cout<<"After removing with iterator by position, removed 3"<<endl;
for(auto value:s1){
    cout<<value<<" ";
}cout<<endl;
auto s_itr = s1.begin();
s_itr++;
auto e_itr = s1.end();
e_itr--;
e_itr--;
cout<<"removing from position 2 to 5"<<endl;
s1.erase(s_itr,e_itr);
for(auto value:s1){
    cout<<value<<" ";
}cout<<endl;
if(s1.find(7)!=s1.end()){
    cout<<"element is present";
}
else{
    cout<<"element is not present";
}
return 0;
}
