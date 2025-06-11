#include<iostream>
#include<vector>
using namespace std;
int main(){
//vector initialize
vector <int> vec(10);
vec={1,2,3,4,5,6,7,8,9,10};
//cout<<vec.size()<<endl;
vec.resize(20);
//cout<<vec.capacity();
//cout<<vec.size();

//adding element with push_back

vec.push_back(13);  //adds a element in last of vector
/*
for(int i=0;i<vec.size();i++){
cout<<vec[i]<<endl;
}
*/
//adding element with insert
vec.insert(vec.begin()+2,99);  //insert 99 at 2th index
/*
for(int i=0;i<vec.size();i++){
cout<<vec[i]<<endl;
}
*/

//deleting element with popback
vec.pop_back();
/*
for(int i=0;i<vec.size();i++){
cout<<vec[i]<<endl;
}
*/
//deleting element with popback
vec.erase(vec.begin()+5);    //delete a certain element
/*
for(int i=0;i<vec.size();i++){
cout<<vec[i]<<endl;
}
*/

vec.clear();  //clear the whole vector
/*
for(int i=0;i<vec.size();i++){
cout<<vec[i];
}
*/

//looping with vector
//taking input
/*
cout<<"enter the numebr of elements in the vector: ";
int n;
cin>>n;
vector <int> v;
cout<<"Enter digits: ";
for(int i=0;i<n;i++){
int element;
cin>>element;
v.push_back(element);
}
*/
/*
for(int i=0;i<v.size();i++){
cout<<"The value of "<<i<<"th element in the vector is : "<<v[i]<<endl;
}
*/
//with for each loop
/*
for(int element:v){
cout<<element<<" ";
}
*/
//with while loop
/*
int i=0;
while(i<n){
cout<<"The value of "<<i<<"th index is : "<<v[i]<<endl;
i++;
}
*/

//********************************************************Question Set************************************************************
//Q.1 find the last occurrence of an element x in a given vecotor
/*
int n;
cout<<"enter the number of the elements: ";
cin>>n;
cout<<"enter elements: ";
vector <int> q1;
for(int i=0;i<n;i++){
int element;
cin>>element;
q1.push_back(element);
}

for(int i=0;i<q1.size();i++){
cout<<q1[i]<<endl;
}

int x;   //x is target
cout<<"enter your target: ";
cin>>x;

int occurence=-1;
*/
//traversing from first
/*
for(int i=0;i<q1.size();i++){
if(q1[i]==x){
occurence=i;
}
}
cout<<"the last occurrence is : "<<occurence;
*/
//traversing from last
/*
for(int i=q1.size()-1;i>=0;i--){
if(q1[i]==x){
occurence=i;
break;
}
}
cout<<"the last occurrence is : "<<occurence;
*/

//Q.2 count the number of occurrences of a particular element x
/*
int n;
vector <int> q2;
cout<<"enter the number of elements : ";
cin>>n;
cout<<"enter the elements: ";
for(int i=0;i<n;i++){
int element;
cin>>element;
q2.push_back(element);
}
for(int i=0;i<n;i++){
cout<<"the elements of "<<i<<"th index is : "<<q2[i]<<endl;
}

int x;
cout<<"enter the target: ";
cin>>x;
int count=0;

for(int i=0;i<q2.size();i++){
if(q2[i]==x){
count++;
}
}
cout<<"the total occurrence of "<<x<<" is : "<<count;
*/

//Q.3 count the number of elements strictly greater than value x
/*
vector <int> q3;
int n;
cout<<"enter the number of elements: ";
cin>>n;
cout<<"enter the number of elements :";
for(int i=0;i<n;i++){
int elements;
cin>>elements;
q3.push_back(elements);
}

for(int i=0;i<q3.size();i++){
cout<<q3[i]<<"\t";
}

int x;
cout<<"enter target: ";
cin>>x;
int count=0;
for(int i=0;i<q3.size();i++){
if(q3[i]>x){
count++;
}
}
cout<<"the total elements greater than "<<x<<" are : "<<count;
*/

//Q.4 check if given vector is sorted or not
/*
vector <int> q4;
int n;
cout<<"enter the number of elements : ";
cin>>n;
for(int i=0;i<n;i++){
int elements;
cin>>elements;
q4.push_back(elements);
}
for(int i=0;i<q4.size();i++){
cout<<q4[i]<<endl;
}

bool sorted=true;
for(int i=0;i<q4.size();i++){
if(q4[i]>q4[i+1]){
sorted=false;
}
else{
sorted=true;
}
}
if(sorted==true){
cout<<"vector is sorted";
}
else{
cout<<"vector is not sorted";
}
*/

//Q.5 find the differences between the sum of elements at even indices to the sum of elements  at odd indices
vector <int> q5;
int n;
cout<<"enter the number of elements : ";
cin>>n;
for(int i=0;i<n;i++){
int elements;
cin>>elements;
q5.push_back(elements);
}
for(int i=0;i<q5.size();i++){
cout<<q5[i]<<endl;
}
int sum=0;
for(int i=0;i<q5.size();i++){
if(q5[i]%2==0){
sum=sum+q5[i];
}
else{
sum=sum-q5[i];
}
}
cout<<"the answer is: "<<sum;
return 0;
}


