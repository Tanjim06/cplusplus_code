//calculate the sum of the elements in the given array
/*
#include<iostream>
using namespace std;
int main(){

int arr[5],sum=0;

int n= sizeof(arr)/4;

for(int i=0;i<n;i++){

cout<<"Enter the "<<i<<" th element of array : "<<endl;
cin>>arr[i];
sum = sum+arr[i];

}

cout<<"The sum is : "<<sum<<endl;

}
*/


//Find the maximum value inside of an array
/*
#include<iostream>
using namespace std;
int main(){

int arr[]={5,6,7,800,100};
int mx = arr[0];

for(int i=1;i<=4;i++){

if(mx<arr[i]){
mx = arr[i];
}
}
cout<<"The maximum value is: "<<mx<<endl;

return 0;
}

*/


//find the second max value inside of array
/*
#include<iostream>
using namespace std;
int main(){

int arr[]={5,6,89,94,14,6};
int mx=arr[0];

for(int i=0;i<=5;i++){
    if(mx<arr[i]){
        mx = arr[i];
      }}

int smax = arr[0];

for(int i=0;i<=5;i++){
if(arr[i]!=mx){
    if(smax<arr[i]){
        smax = arr[i];
        }}}

cout<<"The second largest value is : "<<smax<<endl;

}
*/


//Reverse order problem
/*
#include<iostream>
using namespace std;
int main(){

int arr1[5]={1,2,3,4,5};
int arr2[5];
int n=sizeof(arr1)/4;

for(int i=0;i<n;i++){
int j = n-1-i;
arr2[i]=arr1[j];
cout<<arr2[i]<<endl;
}

}
*/

//Reverse order problem without using a new array
/*
#include<iostream>
using namespace std;
int main(){

int arr[]={1,5,7,12,15};
int n = sizeof(arr)/4;

for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}


int i =0;
int j = n-1;
while(i<j){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;}

for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
}
*/

//Rotate the array
#include<iostream>
void rev(int arr[],int i,int j){
while(i<j){
int temp = arr[i];
arr[i]=arr[j];
arr[j]=temp;
i++;
j--;
}
}
using namespace std;
int main(){
int k=4;
int arr1[]={10,20,30,40,50,60,70};
int n=sizeof(arr1)/4;
for(int i=0;i<n;i++){
cout<<arr1[i]<<"\t";
}
cout<<endl;
rev(arr1,0,n-k-1);
rev(arr1,n-k,n-1);
rev(arr1,0,n-1);
for(int i=0;i<n;i++){
cout<<arr1[i]<<"\t";
}
return 0;
}
