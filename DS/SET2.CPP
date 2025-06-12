/*Cherry's birthday is coming this month! She wants to plan a
birthday party and is preparing an invite list with her friend
Aashi.She asks Aashi to tell her names to add the list.Aashi
is a random guy & keeps coming up with names of people
randomly to add to the invite list, even if the name is
already on the list! Cherry hates redundancy & hence , enlists
names only once.
Find the final invite list that contain names without any
repetition.
I/P :First line of each test contains an integer N ,the number
of names that Aashi pops up with.
O/P : Output the final invite list with each name in a new
line.The names in the final invite list are sorted
lexicographically.
*/
/*
#include<iostream>
#include<set>
#include<cstring>
using namespace std;
int main(){
set<string> invitelist;
int n;
cin>>n;
while(n--){
    string name;
    cin>>name;
    invitelist.insert(name);
}
for(auto value:invitelist){
    cout<<value<<" ";
}
return 0;
}
*/
/*Q.2 Add the common elements.
Given two vectors v1 & v2. Find out the common elements between the
two & return the sum of them.
I/P : v1 = {1,1,2,3,3,3}
v2 = {5,6,7,5,2,3,6}
O/P : 5
*/
/*
#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
int n,m,ans=0;
cin>>n>>m;
vector<int> v1(n);
vector<int> v2(m);
set<int> s1;
cout<<"Enter the elements of v1 "<<endl;
for(int i=0;i<n;i++){
    cin>>v1[i];
}
cout<<"Enter the elements of v2 "<<endl;
for(int i=0;i<m;i++){
    cin>>v2[i];
}
for(auto ele:v1){
    s1.insert(ele);
}
for(auto ele:v2){
    if(s1.find(ele)!=s1.end()){
        ans+=ele;
    }
}
cout<<ans;
return 0;
}
*/

/*Q.3 Check if string has all english alphabets.
Given a string .You have to check if it has all english alphabets from
a-z.
*/
#include<iostream>
#include<set>
#include<cstring>
#include<algorithm>
using namespace std;
bool checkalpha(string str){
set<char> s1;
if(str.size()<26){
    return false;
}
else{
    transform(str.begin(),str.end(),str.begin(),::tolower);
    for(auto v:str){
        s1.insert(v);
    }

}
return (s1.size()==26);
}
int main(){
string str;
cin>>str;
cout<<checkalpha(str);
return 0;
}
