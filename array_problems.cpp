//Q.1 find the total numbers of pairs in the given arrays whose sum is equal to the given value x.
/*
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the size of the array : ";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){
cout<<"the value of the "<<i<<"th index is "<<arr[i]<<endl;
}
int x;
cout<<"enter the target: ";
cin>>x;
int pairs=0;
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(arr[i]+arr[j]==x){
pairs++;
}
}
}
cout<<"the number of pair is :"<<pairs;
*/

//Q.2 count the numbger of triplets whose sum is equal to the given value of x
/*
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the size of the array : ";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){
cout<<"the value of the "<<i<<"th index is "<<arr[i]<<endl;
}
int x;
cout<<"enter the target: ";
cin>>x;
int triplet=0;
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
for(int k=j+1;k<n;k++){
if(arr[i]+arr[j]+arr[k]==x){
triplet++;
}}}}
cout<<"the number of triplets : "<<triplet;
*/

//Q.3 find the unique number in a given array where all the elements are being repeated twice with one value being unique
/*
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the size of the array : ";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){
cout<<"the "<<i<<" th element is : "<<arr[i]<<endl;
}
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(arr[i]==arr[j]){
arr[i]=arr[j]=-1;
}}}
for(int i=0;i<n;i++){
if(arr[i]>0){
cout<<"the unique value is : "<<arr[i];
}}
*/

//Q.5 find the second largest element in an array
/*
#include<iostream>
#include<climits>
int n;
int func(int arr[]){
int mx=INT_MIN;
int maxindex=-1;
for(int i=0;i<n;i++){
if(arr[i]>mx){
mx=arr[i];
maxindex=i;
}}
return maxindex;
}
using namespace std;
int main(){
cout<<"enter the size of the array: ";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){
cout<<"the "<<i<<" th index element is "<<arr[i]<<endl;
}
int largestidx=func(arr);
int largestelement=arr[largestidx];
cout<<"the largest value is : "<<largestelement<<endl;
//arr[largestidx]=-1;
for(int i=0;i<n;i++){
if(arr[i]==largestelement){
arr[i]=-1;
}}
int secondlargeidx=func(arr);
cout<<"the second largest value is : "<<arr[secondlargeidx];
*/

//Q.6 rotate array by k steps where k is non-negative.[k can be greater than the size of the array]
//with empty array
/*
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the size of the array : ";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){
cout<<"the "<<i<<" th element is "<<arr[i]<<endl;
}
int k;
k=k%n;
cout<<"enter the stpes : ";
cin>>k;
int resultarr[n];
int j=0;
for(int i=n-k;i<n;i++){
resultarr[j]=arr[i];
j++;
}
for(int i=0;i<=k;i++){
resultarr[j++]=arr[i];
}

for(int i=0;i<n;i++){
cout<<"the "<<i<<" th element of the array is : "<<resultarr[i]<<endl;
}
*/

//Q.6.1 rotate array by k steps where k is non-negative.[k can be greater than the size of the array]
//without empty array
/*
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"enter the size of the array : ";
cin>>n;
vector <int> arr;
for(int i=0;i<n;i++){
int elements;
cin>>elements;
arr.push_back(elements);
}
for(int i=0;i<n;i++){
cout<<"the "<<i<<" th element is "<<arr[i]<<endl;
}
int k;
k=k%n;
cout<<"enter the stpes : ";
cin>>k;
reverse(arr.begin(),arr.end());
reverse(arr.begin(),arr.begin()+k);
reverse(arr.begin()+k,arr.end());
for(int i=0;i<n;i++){
cout<<"the "<<i<<" th index element is :"<<arr[i]<<endl;
}
*/

//Q.7 given q queries check if the given number is present in the array or not
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"enter the size of the vector : ";
cin>>n;
vector <int> arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){
cout<<"the "<<i<<" th element is : "<<arr[i]<<endl;
}
const int N=1e5+10;
vector<int> freq(N,0);
for(int i=0;i<n;i++){
freq[arr[i]]++;
}
int q;
cout<<"enter queries : ";
cin>>q;
while(q--){
int queryelement;
cin>>queryelement;
cout<<freq[queryelement];
}
return 0;
}




