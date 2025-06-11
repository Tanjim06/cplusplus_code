#include<iostream>
using namespace std;
//linspace function declared for Q.3
int linsearch(int arr[],int n,int k){
for(int i=0;i<n;i++){
if(arr[i]==k){
return i;
}
}
return -1;
}
int main(){

// Task.1>>>printing the size and the element number of an array
/*
int arr[]={1,2,3,4,5,6,7,8,9,10};
cout<<"The size of array is : "<<sizeof(arr)<<endl;
cout<<"The elements of array is : "<<sizeof(arr)/sizeof(arr[0])<<endl;
*/

//Task.2>>>Traversing the array with loops

int arr1[]={10,20,30,40,50,60,70,80};
int s=sizeof(arr1)/sizeof(arr1[0]);
/*
for(int i=0;i<s;i++){
cout<<"The "<<i<<"th element of the array is: "<<arr1[i]<<endl;
}
*/

//Task.3>>>for each loop
/*
for(int element:arr1){
cout<<element<<"\t";
}
*/

//Task.4>>>while loop
/*
int i=0;
while(i<s){
cout<<"The "<<i<<"th element of the array is : "<<arr1[i]<<endl;
i++;
}
*/
//Task.5>>>do-while
/*
do{
cout<<"The "<<i<<"th element of the array is : "<<arr1[i]<<endl;
i++;
}while(i<s);
return 0;
}
*/

//Task.6>>>Taking input in array with loops
/*
int n;
cout<<"Enter the number of elements you want in your array: ";
cin>>n;
int arr2[n];
for(int i=0;i<n;i++){
cin>>arr2[i];
}
//outputting the inputed array
for (int i=0;i<n;i++) {
cout<<"The "<<i<<"th element of array is : "<< arr2[i]<<endl;
}
}
*/

//Task.7>>>taking input of vowels with foreach
/*
int n;
cout<<"Enter the number of elements of array: ";
cin>>n;
char arr3[n];
for(char &vowels:arr3){
cin>>vowels;
}
for(char elements:arr3){
cout<<elements<<"\t";
}
*/

//*****************************Question Section******************************
//Q.1 calculate the sum of all elements in an array
/*
int n;
cin>>n;
int arrx[n];
for(int i=0;i<n;i++){
cin>>arrx[i];
}
int sum=0;
for(int i=0;i<n;i++){
sum=sum+arrx[i];
}
cout<<"the sum is: "<<sum;
*/

//Q.2 find the maximum value out of all elements in an array
/*
int n;
cin>>n;
int arr4[n];
for(int i=0;i<n;i++){
cin>>arr4[i];
}
int mx=arr4[0];
for(int i=0;i<n;i++){
if(mx<arr4[i]) mx=arr4[i];
}
cout<<"The max value if: "<<mx;
*/

//Q.3 search if a element is present in an array.If not return -1
int n;
cin>>n;
int arr5[n];
for(int i=0;i<n;i++){
cin>>arr5[i];
}
int target;
cout<<"Enter your target: ";
cin>>target;

cout<<"The target is at index: "<<linsearch(arr5,n,target);  //You can find the function at line 4
}
