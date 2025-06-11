#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
bool anagram(string s,string t){
    if(s.length()!=t.length()) return false;
    vector<int>freq(26,0);
    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
        freq[t[i]-'a']--;
    }
    for(int count:freq){
        if(count!=0){
            return false;
        }
    }
    return true;
}
int main(){
    string s,t;
    cin>>s>>t;
    cout<<anagram(s,t);

    return 0;
}