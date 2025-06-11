//Q.1 sort an array consisting only 0s and 1s
/*
#include<iostream>
#include<vector>
using namespace std;
void sortzerones(vector<int>&arr){
int zeroscount=0;
int n=arr.size();
for(int i=0;i<n;i++){
if(arr[i]==0){
zeroscount++;
}}
for(int i=0;i<n;i++){
if(i<zeroscount){
arr[i]=0;
}
else{
arr[i]=1;
}}}
int main(){
int n;
cout<<"Enter the size of the array : ";
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){
cout<<"the "<<i<<" th element of the array is : "<<arr[i]<<endl;
}
sortzerones(arr);
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}cout<<endl;
return 0;
}
*/

//Q.1.1 //Q.1 sort an array consisting only 0s and 1s(more efficient)
/*
#include<iostream>
#include<vector>
using namespace std;
void sortzerones(vector<int>&arr){
int n=arr.size();
int leftpointer=0;
int rightpointer=n-1;
while(leftpointer<rightpointer){
if(arr[leftpointer]==0){
leftpointer++;
}
if(arr[rightpointer]==1){
rightpointer--;
}
else{
int temp=arr[rightpointer];
arr[rightpointer]=arr[leftpointer];
arr[leftpointer]=temp;
leftpointer++;
rightpointer--;
}}}
int main(){
int n;
cout<<"Enter the size of the array : ";
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){
cout<<"the "<<i<<" th element of the array is : "<<arr[i]<<endl;
}
sortzerones(arr);
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}cout<<endl;
return 0;
}
*/


/*Q.2 given an array , move all even integers at the begining of the array followed by all the odd integers.The relative order of odd
or even does not matter.Return any array that satisfies the condition.*/
/*
#include<iostream>
#include<vector>
using namespace std;
void sortarr(vector<int>&arr){
int n=arr.size();
int left_ptr=0;
int right_ptr=n-1;
while(left_ptr<right_ptr){
if((arr[left_ptr]%2)==0){
left_ptr++;
}
else if((arr[right_ptr])%2!=0){
right_ptr--;
}
else{
int temp=arr[left_ptr];
arr[left_ptr]=arr[right_ptr];
arr[right_ptr]=temp;
}}}
int main(){
int n;
cout<<"enter the size of array : ";
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){
cout<<"the"<<i<<" th element of the array is : "<<arr[i]<<endl;
}
sortarr(arr);
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}cout<<endl;

return 0;
}
*/

/*Q.3 given an array sorted in non-decreasing(increasing) order ,return an array of squares of each number sorted in non-decreasing
(increasing) order.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int n;
cout<<"enter the array size : ";
cin>>n;
vector<int> arr(n);
vector<int> ans;
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){
cout<<"the "<<i<<" th element of the array is : "<<arr[i]<<endl;
}
int lp=0;
int rp=n-1;
while(lp<=rp){
if (abs(arr[lp])<=abs(arr[rp])){
ans.push_back(arr[rp]*arr[rp]);
rp--;
}
else{
ans.push_back(arr[lp]*arr[lp]);
lp++;
}}
reverse(ans.begin(),ans.end());
for(int i=0;i<=arr.size()-1;i++){
cout<<ans[i]<<" ";
}cout<<endl;
return 0;
}
