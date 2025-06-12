/*
#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int> st;
cout<<st.empty()<<endl;
st.push(1);
st.push(2);
cout<<st.top()<<endl;
st.push(3);
st.push(4);
st.push(5);
cout<<st.top()<<endl;
st.pop();
cout<<st.top()<<endl;
cout<<st.empty()<<endl;
return 0;
}
*/

//Q.1 Copy contents of one stack to another in same order.
/*
#include<iostream>
#include<stack>
using namespace std;
stack<int> copyStack(stack<int> &st){
stack<int> temp;
while(!st.empty()){
    int curr = st.top();
    st.pop();
    temp.push(curr);
}
stack<int> result;
while(!temp.empty()){
    int curr = temp.top();
    temp.pop();
    result.push(curr);
}
return result;
}
int main(){
stack<int> st;
st.push(10);
st.push(16);
st.push(9);
st.push(88);
st.push(50);
stack<int> cp_stack = copyStack(st);
while(!cp_stack.empty()){
    int curr = cp_stack.top();
    cp_stack.pop();
    cout<<curr<<endl;
}

return 0;
}
*/

//Q.1 Using recursion
/*
#include<iostream>
#include<stack>
using namespace std;
void recurCpStack(stack<int> &st,stack<int> &result){
if(st.empty()) return;
int curr = st.top();
st.pop();
recurCpStack(st,result);
result.push(curr);
}
int main(){
stack<int> st;
st.push(5);
st.push(16);
st.push(32);
st.push(46);
st.push(58);
stack<int> result;
recurCpStack(st,result);
while(!result.empty()){
    int curr = result.top();
    result.pop();
    cout<<curr<<endl;
}

return 0;
}
*/
//Q.2 Insert at bottom/any index
/*
#include<iostream>
#include<stack>
using namespace std;
void insertAtbottom(stack<int> &st,int x){
stack<int> temp;
while(!st.empty()){
    int curr = st.top();
    st.pop();
    temp.push(curr);
}
st.push(x);
while(!temp.empty()){
    int curr = temp.top();
    temp.pop();
    st.push(curr);
}
}
int main(){
stack<int> st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
insertAtbottom(st,13);
while(!st.empty()){
    int curr = st.top();
    st.pop();
    cout<<curr<<" ";
}

return 0;
}
*/
//Q.2 recursion
/*
#include<iostream>
#include<stack>
using namespace std;
void recurAdd(stack<int> &st,int x){
if(st.empty()){
    st.push(x);
    return;
}
int curr = st.top();
st.pop();
recurAdd(st,x);
st.push(curr);
}
int main(){
stack<int> st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
recurAdd(st,100);
while(!st.empty()){
    int curr = st.top();
    st.pop();
    cout<<curr<<" ";
}

return 0;
}
*/

//Q.3 Insert at any
/*
#include<iostream>
#include<stack>
using namespace std;
void addAtany(stack<int> &st,int x,int p){
stack<int> temp;
int n = st.size();
int count = 0;
while(count<n-p){
    count++;
    int curr = st.top();
    st.pop();
    temp.push(curr);
}
st.push(x);
while(!temp.empty()){
    int curr = temp.top();
    temp.pop();
    st.push(curr);
}}
int main(){
stack<int> st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
addAtany(st,100,2);
while(!st.empty()){
    int curr = st.top();
    st.pop();
    cout<<curr<<" ";
}
return 0;
}
*/
//Q.3 Recursion
/*
#include<iostream>
#include<stack>
void f(stack<int> st,int x,int p){
int n = st.size();
f(st,x,p);
}
using namespace std;
int main(){
stack<int> st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
while(!st.empty()){
    int curr = st.top();
    st.pop();
    cout<<curr<<" ";
}
return 0;
}
*/

//Q.4 Remove from bottom
/*
#include<iostream>
#include<stack>
using namespace std;
void removeBottom(stack<int> &st){
stack<int> temp;
while(!(st.size()==1)){
    int curr = st.top();
    st.pop();
    temp.push(curr);
}
st.pop();
while(!temp.empty()){
    int curr = temp.top();
    temp.pop();
    st.push(curr);
}
}
int main(){
stack<int> st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
removeBottom(st);
while(!st.empty()){
    int curr = st.top();
    st.pop();
    cout<<curr<<" ";
}

return 0;
}
*/

//Remove from any
/*
#include<iostream>
#include<stack>
using namespace std;
void removeAny(stack<int> &st,int p){
stack<int> temp;
int n = st.size();
int count = 0;
while(count<n-p-1){
    count++;
    int curr = st.top();
    st.pop();
    temp.push(curr);
}
st.pop();
while(!temp.empty()){
    int curr = temp.top();
    temp.pop();
    st.push(curr);
}}
int main(){
stack<int> st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
removeAny(st,1);
while(!st.empty()){
    int curr = st.top();
    st.pop();
    cout<<curr<<" ";
}
return 0;
}
*/

//Q.5 reverse stack
/*
#include<iostream>
#include<stack>
using namespace std;
void reverseit(stack<int> &st){
stack<int> temp1;
stack<int> temp2;
while(!st.empty()){
    int curr = st.top();
    st.pop();
    temp1.push(curr);
}
while(!temp1.empty()){
    int curr = temp1.top();
    temp1.pop();
    temp2.push(curr);
}
while(!temp2.empty()){
    int curr = temp2.top();
    temp2.pop();
    st.push(curr);
}}
int main(){
stack<int> st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
reverseit(st);
while(!st.empty()){
    int curr = st.top();
    st.pop();
    cout<<curr<<" ";
}
return 0;
}
*/
//Recursion
/*
#include<iostream>
#include<stack>
using namespace std;
void insertAtbottom(stack<int> &st,int x){
stack<int> temp;
while(!st.empty()){
    int curr = st.top();
    st.pop();
    temp.push(curr);
}
st.push(x);
while(!temp.empty()){
    int curr = temp.top();
    temp.pop();
    st.push(curr);
}}
void f(stack<int> &st){
if(st.empty()) return;
int curr = st.top();
st.pop();
f(st);
insertAtbottom(st,curr);
}
int main(){
stack<int> st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
f(st);
while(!st.empty()){
    int curr = st.top();
    st.pop();
    cout<<curr<<" ";
}
return 0;
}
*/
//Q.6 Check whether a given bracket sequence is balanced or not.
/*
#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
bool isbalance(string s){
stack<char> st;
for(int i=0;i<s.size();i++){
    char ch = s[i]; //current character
    if(ch=='(' || ch=='{' || ch=='['){
        st.push(ch);
       }
    else{
        //closing brackets
        if(ch==')' && !st.empty() && st.top()=='('){
            st.pop();
        }
        else if(ch=='}' && !st.empty() && st.top()=='{'){
            st.pop();
        }
        else if(ch==']' && !st.empty() && st.top()=='['){
            st.pop();
        }
        else{
            return false;
        }
    }
}
return st.empty();
}
int main(){
string s = "{}";
cout<<isbalance(s);
return 0;
}
*/

//Q.7 Next greater element
/*
#include<iostream>
using namespace std;
void nge(int arr[],int n){;
int op[n] = {-1,-1,-1,-1,-1,-1,-1};
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]<arr[j]){
            op[i] =arr[j];
            break;
        }
    }
}
for(int i=0;i<n;i++){
    cout<<op[i]<<" ";
}}
int main(){
int n;
cout<<"Enter the size of the array : "<<endl;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
nge(arr,n);
return 0;
}
*/

//Q.7 Using stack
/*
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> nge(vector<int> &arr){
int n = arr.size();
vector<int> res(n,-1);
stack<int> st;
st.push(0);
for(int i=1;i<n;i++){
    while(!st.empty() && arr[i]>arr[st.top()]){
        res[st.top()] = arr[i];
        st.pop();
    }
    st.push(i);
}
while(!st.empty()){
    res[st.top()] = -1;
    st.pop();
}
return res;
}
int main(){
int n;
cout<<"Enter the size of the array : "<<endl;
cin>>n;
stack<int> st;
vector<int> arr;
vector<int> result;
while(n--){
    int x;
    cin>>x;
    arr.push_back(x);
}
result = nge(arr);
for(int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
}
return 0;
}
*/

//Q.8 Next smaller element
/*
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> nge(vector<int> &arr){
int n = arr.size();
vector<int> res(n,-1);
stack<int> st;
st.push(0);
for(int i=1;i<n;i++){
    while(!st.empty() && arr[i]<arr[st.top()]){
        res[st.top()] = arr[i];
        st.pop();
    }
    st.push(i);
}
while(!st.empty()){
    res[st.top()] = -1;
    st.pop();
}
return res;
}
int main(){
int n;
cout<<"Enter the size of the array : "<<endl;
cin>>n;
stack<int> st;
vector<int> arr;
vector<int> result;
while(n--){
    int x;
    cin>>x;
    arr.push_back(x);
}
result = nge(arr);
for(int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
}
return 0;
}
*/
//Q.9 Previous greater element
//Q.10 Previous smaller element
/*Q.11 Given a series of N daily price quotes for a stock, we need to calculate the
span of the stocks price for all N days.The span of the stocks price is one day
is the maximum number of consecutive days(starting from that day and going backward)
for which the stock price was less than or equal to the price of that day.
*/
/*
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> pge(vector<int> &arr){
int n = arr.size();
reverse(arr.begin(),arr.end());
vector<int> res(n,-1);
stack<int> st;
st.push(0);
for(int i=0;i<n;i++){
    while(!st.empty() && arr[i]>arr[st.top()]){
        res[st.top()] = n-i-1;
        st.pop();
    }
    st.push(i);
}
reverse(res.begin(),res.end());
reverse(arr.begin(),arr.end());
return res;
}
int main(){
int n;
cout<<"Enter the size of the array : "<<endl;
cin>>n;
vector<int> arr;
while(n--){
    int x;
    cin>>x;
    arr.push_back(x);
}
vector<int> res = pge(arr);
for(int i=0;i<res.size();i++){
    cout<<(i - res[i])<<" ";
}
return 0;
}
*/

/*Q.12 Given an array of integer heights representing the histograms bar
height where the width of each bar is 1, return the area of the largest
rectangle in the histogram.
*/
/*
#include<iostream>
#include<stack>
#include<vector>
#include<climits>
using namespace std;
int histogramCalc(vector<int> &arr){
int n = arr.size();
stack<int> st;
int ans = INT_MIN;
st.push(0);
for(int i=0;i<n;i++){
    while(!st.empty() && arr[i]<arr[st.top()]){
        int el = arr[st.top()];
        st.pop();
        int nsi = i;
        int psi = (st.empty()) ? -1 : st.top();
        ans = max(ans,el*(nsi-psi-1));
    }
    st.push(i);
}
while(!st.empty()){
    int el = arr[st.top()];
    st.pop();
    int nsi = n;
    int psi = (st.empty()) ? -1 : st.top();
    ans = max(ans,el*(nsi-psi-1));
}
return ans;
}
int main(){
int n;
cout<<"Enter the size of the array : "<<endl;
cin>>n;
vector<int> arr;
while(n--){
    int x;
    cin>>x;
    arr.push_back(x);
}
int ans = histogramCalc(arr);
cout<<ans;
return 0;
}
*/

/*Q.13 Design a stack that supports push,pop,top and retrieving the
minimum element in constant time.
Implementing the MinStack class:
*MinStack() initializes the stack object.
*void push(int val) pushes the element val onto the stack.
*void pop() removes the element on the top of the stack.
*int top() gets the top element from the stack.
*int getMin() retrieves the minimum element in the stack.

You must implement a solution with O(1) time complexity for each
function.
Assumption: Methods pop,top and getMin operations will always be
called on non-empty stacks.
*/
/*
#include<iostream>
#include<stack>
#include<climits>
#define ll long long int
using namespace std;
class MinStack{
public:
    stack<ll> st;
    ll mn;
    MinStack(){
        this->mn = INT_MAX;

    }
    void push(int val){
        if(this->st.empty()){
            this->mn = val;
            this->st.push(val);
        }
        else{
            this->st.push(val-this->mn);
            if(this->mn > val){
                this->mn = val;
            }
        }
    }
    void pop(){
        if(!this->st.empty()){
            if(this->st.top()>=0){
                this->st.pop();
            }
            else{
                this->mn = this->mn - this->st.top();
                this->st.pop();
            }
        }

    }
    int top(){
        if(this->st.size()==1){
            return this->st.top();
        }
        else if(this->st.top()<0){
            return this->mn;
        }
        else{
            return this->mn + this->st.top();
        }

    }
    int getMin(){
        return this->mn;
    }

};
int main(){
MinStack mn;
mn.push(1);
mn.push(2);
mn.push(3);
mn.push(4);
mn.push(5);
cout<<mn.top()<<endl;
cout<<mn.getMin();
return 0;
}
*/

//Q.14 Evaluation of postfix expression
/*
#include<iostream>
#include<stack>
#include<cmath>
#include<cstring>
using namespace std;
int calc(int v1,int v2,char op){
if(op=='^'){
    return pow(v1,v2);
}
if(op=='+'){
    return v1+v2;
}
else if(op=='-'){
    return v1-v2;
}
if(op=='*'){
    return v1*v2;
}
return v1/v2;
}
int eval(string str){
stack<int> st;
for(int i=0;i<str.size();i++){
    char ch = str[i];
    if(isdigit(ch)){
        st.push(ch-'0');
    }
    else{
        int v2 = st.top();
        st.pop();
        int v1 = st.top();
        st.pop();
        st.push(calc(v1,v2,ch));
    }
}
return st.top();
}
int main(){
string str = "231*+9-";
cout<<eval(str);
return 0;
}
*/

//Q.15 Evaluation of prefix expression
/*
#include<iostream>
#include<stack>
#include<cmath>
#include<cstring>
using namespace std;
int calc(int v1,int v2,char op){
if(op=='^'){
    return pow(v1,v2);
}
if(op=='+'){
    return v1+v2;
}
else if(op=='-'){
    return v1-v2;
}
if(op=='*'){
    return v1*v2;
}
return v1/v2;
}
int eval(string str){
stack<int> st;
for(int i=str.size()-1;i>=0;i--){
    char ch = str[i];
    if(isdigit(ch)){
        st.push(ch-'0');
    }
    else{
        int v2 = st.top();
        st.pop();
        int v1 = st.top();
        st.pop();
        st.push(calc(v1,v2,ch));
    }
}
return st.top();
}
int main(){
string str = "-9+*531";
cout<<eval(str);
return 0;
}
*/

//Q.15 Evaluation of infix expression

#include<iostream>
#include<stack>
#include<cmath>
#include<cstring>
using namespace std;
int calc(int v1,int v2,char op){
if(op=='^'){
    return pow(v1,v2);
}
if(op=='+'){
    return v1+v2;
}
if(op=='/'){
    return v1/v2;
}
if(op=='*'){
    return v1*v2;
}
return v1-v2;
}
int precedence(char ch){
if(ch=='^') return 3;
else if(ch=='*' || ch=='/') return 2;
else if(ch=='+' || ch=='-') return 1;
else return -1;
}
int eval(string str) {
    stack<int> num;
    stack<char> op;

    for (int i = 0; i < str.size(); i++) {
        if (isdigit(str[i])) {
            num.push(str[i] - '0');
        } else if (str[i] == '(') {
            op.push('(');
        } else if (str[i] == ')') {
            while (!op.empty() && op.top() != '(') {
                char ops = op.top();
                op.pop();
                int v2 = num.top();
                num.pop();
                int v1 = num.top();
                num.pop();
                num.push(calc(v1, v2, ops));
            }
            if (!op.empty()) op.pop();
        } else {
            while (!op.empty() && precedence(op.top()) >= precedence(str[i]) &&
                   (str[i] != '^' || precedence(op.top()) > precedence(str[i]))) {
                char ops = op.top();
                op.pop();
                int v2 = num.top();
                num.pop();
                int v1 = num.top();
                num.pop();
                num.push(calc(v1, v2, ops));
            }
            op.push(str[i]);
        }
    }

    while (!op.empty()) {
        char ops = op.top();
        op.pop();
        int v2 = num.top();
        num.pop();
        int v1 = num.top();
        num.pop();
        num.push(calc(v1, v2, ops));
    }
    return num.top();
}
int main(){
string str ="1+(2*(3-1))+2";
cout<<eval(str);
return 0;
}

//Q.16 Conversion of a prefix operation to a postfix operation_canceled
/*
#include<iostream>
#include<stack>
#include<cstring>
#include<algorithm>
using namespace std;
string eval(string &str){
stack<string> st;
reverse(str.begin(),str.end());
    for (int i = 0; i < str.size(); i++) {
        if (isdigit(str[i])) {  // If operand, push it as a string
            st.push(string(1, str[i]));
        } else {  // If operator
            string v1 = st.top(); st.pop();
            string v2 = st.top(); st.pop();
            string newExp = v1 + v2 + str[i];  // Create postfix expression
            st.push(newExp);  // Push the new expression back to the stack
        }
    }
return st.top();
}
int main(){
string str = "*+32-15";
cout<<eval(str);

return 0;
}
*/
