/* Q.1Write a program to find the longest common prefix string amongst anarray of 
strings.
If there is no common prefix, return an empty string "".
*/
/*
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    string ans=str[0];
    int j;
    for(int i=1;i<n;i++){
       j=0;
       while(ans[j]==str[i][j] && j<str[i].length()){
        j++;
       }
       ans=ans.substr(0,j);
    }
    cout<<ans;

    return 0;
}
*/
/*Q.2
Given an integer n, return a string array answer (1-indexed) where:

answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
answer[i] == "Fizz" if i is divisible by 3.
answer[i] == "Buzz" if i is divisible by 5.
answer[i] == i (as a string) if none of the above conditions are true.
*/
/*
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> str(n);
    for(int i=1;i<=n;i++){
        if(i%3==0 && i%5==0){
            str[i-1]="fizzbuzz";
        }
        else if(i%3==0){
            str[i-1]="fizz";
        }
        else if(i%5==0){
            str[i-1]="buzz";
        }
        else{
            str[i-1]=to_string(i);
        }
    }
    for(int i=1;i<=str.size();i++){
        cout<<str[i-1]<<" ";
    }
    return 0;
}
*/
/*Q.3
You are given a string s and an integer k. You can choose any character of the
 string and change it to any other uppercase English character. 
 You can perform this operation at most k times.
Return the length of the longest substring containing the same letter you can
 get after performing the above operations.
*/
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int i=0;
    int j=i+1;


    return 0;
}