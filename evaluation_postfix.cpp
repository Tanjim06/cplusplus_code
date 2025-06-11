#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
int operator_(int a,int b,char op){
    if(op=='+') return a+b;
    else if(op=='-') return a-b;
    else if(op=='*') return a*b;
    else return a/b;
}
int main(){
    string str="231*+9-";
    stack<int>st;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        if(isdigit(ch)){
            st.push(ch-'0');
        }
        else{
            int v1=st.top();
            st.pop();
            int v2=st.top();
            st.pop();
            int res=operator_(v2,v1,ch);
            st.push(res);
        }
    }
    cout<<st.top();
    return 0;
}