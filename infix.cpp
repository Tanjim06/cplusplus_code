#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str="9-5+3*4/6";
    stack<int>value;
    stack<char>op;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        int digit=ch-48;
        if(digit>=0 && digit<=9) value.push(digit);
        else if(op.empty()) op.push(ch);
        else{
            if(ch=='+' || ch=='-'){
                int v2=value.top();
                value.pop();
                int v1=value.top();
                value.pop();
                if(op.top()=='-') value.push(v1-v2);
                if(op.top()=='+') value.push(v1+v2);
                if(op.top()=='*') value.push(v1*v2);
                if(op.top()=='/') value.push(v1/v2);
                op.pop();
                op.push(ch);
            }
            if(ch=='*' || ch=='/'){
                if(ch=='*' || ch=='/'){
                int v2=value.top();
                value.pop();
                int v1=value.top();
                value.pop();
                if(op.top()=='*') value.push(v1*v2);
                if(op.top()=='/') value.push(v1/v2);
                op.pop();
                op.push(ch);
            }
                else{
                    op.push(ch);   
            }

            }
        }
        while(value.size()>1){
            int v2=value.top();
            value.pop();
            int v1=value.top();
            value.pop();
            if(op.top()=='-') value.push(v1-v2);
            if(op.top()=='+') value.push(v1+v2);
            if(op.top()=='*') value.push(v1*v2);
            if(op.top()=='/') value.push(v1/v2);
            op.pop();
        }
    }
    cout<<value.top();



    return 0;
}