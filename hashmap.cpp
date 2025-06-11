/*
#include<iostream>
#include<cstring>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
bool canMakeEqual(vector<string> &v){
unordered_map<char,int> frequency;
for(auto str:v){
    for(char ch:str){
        frequency[ch]++;
    }
}
int n=v.size();
for(auto ele:frequency){
    if(ele.second%n!=0){
        return false;
    }
}
return true;
}
int main(){
int n;
cin>>n;
vector<string> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
cout<<(canMakeEqual(v)?"Yes":"No")<<endl;
return 0;
}
*/
/*
#include<iostream>
#include<unordered_map>
#include<cstring>
using namespace std;
bool checkAnagram(string s1,string s2){
if(s1.length()!=s2.length()){
    return false;
}
unordered_map<char,int> freq;
for(auto ch1:s1){
    freq[ch1]++;
}
for(auto ch2:s2){
    if(freq.find(ch2)==freq.end()){
        return false;
    }
    else{
        freq[ch2]--;
    }
}
for(auto ele:freq){
    if(ele.second!=0){
        return false;
    }
}
return true;
}
int main(){
string s1,s2;
cin>>s1>>s2;
cout<<(checkAnagram(s1,s2)?"True":"False");
return 0;
}
*/
/*
#include<iostream>
#include<cstring>
#include<unordered_map>
#include<vector>
using namespace std;
bool checkNoOnetoManyMapping(string s1,string s2){
unordered_map<char,char> dir;
for(int i=0;i<s1.length();i++){
    if(dir.find(s1[i])!=dir.end()){
        if(dir[s1[i]]!=s2[i]){
            return false;
        }
    }
    else{
        dir[s1[i]]=s2[i];
    }
}
return true;
}
bool checkIso(string s1,string s2){
if(s1.length()!=s2.length()){
    return false;
}
bool s1s2=checkNoOnetoManyMapping(s1,s2);
bool s2s1=checkNoOnetoManyMapping(s2,s1);
return s1s2 && s2s1;
}
int main(){
string s1,s2;
cin>>s1>>s2;

cout<<(checkIso(s1,s2)?"Isomorphic":"Not Isomorphic");


return 0;
}
*/

/*
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> targetSum(vector<int> &v,int target){
unordered_map<int,int> m;
vector<int> ans(2,-1);
for(int i=0;i<v.size();i++){
    if(m.find(target-v[i])!=m.end()){
        ans[0]=m[target-v[i]];
        ans[1]=i;
        return ans;
    }
    else{
        m[v[i]]=i;
    }
}
return ans;
}
int main(){
int n,target;
cin>>n;
cin>>target;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
vector<int> ans = targetSum(v,target);
cout<<ans[0]<<" "<<ans[1]<<endl;

return 0;
}
*/

#include<iostream>
#include<unordered_map>
#include<climits>
#include<vector>
using namespace std;
int fn(vector<int> &v){
int prefixsum=0;
int maxlen=INT_MIN;
unordered_map<int,int> m;
for(int i=0;i<v.size();i++){
prefixsum+=v[i];
if(prefixsum==0){
    maxlen++;
}
if(m.find(prefixsum)!=m.end()){
    maxlen=max(maxlen,i-m[prefixsum]);
}
else{
    m[prefixsum]=i;

}}
return maxlen;
}
int main(){
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
cout<<fn(v)<<endl;

return 0;
}
