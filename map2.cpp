/*Q.1 Sum of repetetetive elements.
You are given an integer n, representing the number of elements.Then you will be
given n elements.You have to return the sum of elements, the elements that appear
more than one time.
*/
/*
#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
map<int,int> m1;
for(int i=0;i<n;i++){
    m1[v[i]]++;
}
int sum=0;
for(auto p:m1){
    if(p.second>1){
        sum+=p.first;
    }
}
cout<<sum;
return 0;
}
*/

/*
Q.2 Target sum question
*/
/*
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    int n,target;
    cin>>n>>target;
    vector<int>arr(n);
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        int x=target-arr[i];
        if(mp.find(x)!=mp.end()){
            cout<<"the pair is : "<<arr[i]<<" "<<x<<endl;
        }
        mp[arr[i]]=i;   //arr[i] is the key and i is the value
    }   
    return 0;
}
*/
/*
Q.3 Find the First Non-Repeating Character
Problem: Given a string, return the first non-repeating character’s index.
 If all characters repeat, return -1.
*/
/*
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    string str;
    cin>>str;
    unordered_map<char,int>mp;
    for(int i=0;i<str.length();i++){
        mp[str[i]]++;
    }
    for(int i=0;i<str.length();i++){
        if(mp[str[i]]==1){
            cout<<i;
            break;
        }
    }
    return 0;
}
*/
/*
Q.4 Check If Two Arrays Are Equal
Problem: Given two integer arrays, check if they have the same elements with 
the same frequency.
*/
/*
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],brr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>brr[i];
    }
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        mp[brr[i]]--;
    }
    for(auto &itr:mp){
        if(itr.second!=0){
            cout<<"arrays are not equal"<<endl;
            return 0;
        }
    }
    cout<<"arrays are equal"<<endl;
    return 0;
}
*/
/*
Q.5 Find Duplicates in an Array
Problem: Given an integer array, return all duplicate elements.
*/
/*
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto &itr:mp){
        if(itr.second>1){
            cout<<itr.first<<" ";
        }
    }
    return 0;
}
/*
/*
Q.6 5. Group Anagrams
Problem: Given an array of words, group words that are anagrams together.
*/
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    return 0;
}

/*
Q.6 6. Intersection of Two Arrays
Problem: Given two arrays, return their intersection (common elements).
*/