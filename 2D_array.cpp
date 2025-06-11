/*
#include<iostream>
using namespace std;
int main(){
//initializing a 2d array
/*
int arr2d[2][3]={{1,2,3},{4,5,6}};
for(int i=0;i<2;i++){
for(int j=0;j<3;j++){
cout<<arr2d[i][j]<<endl;
}
cout<<endl;
}
*/
//taking input a 2d array
/*
int m,n;
cout<<"enter the row size of the array : ";
cin>>m;
cout<<"enter the column size of the array : ";
cin>>n;
int arr2d[m][n];
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
cin>>arr2d[i][j];
}}
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
cout<<arr2d[i][j]<<" ";
}
cout<<endl;
}
return 0;
}
*/
//Q.1 calculate the multiplication of two matrices entered by user
/*
#include<iostream>
using namespace std;
int main(){
int r1,c1,r2,c2;
cout<<"enter the size of the row : ";
cin>>r1;
cout<<"enter the size of the column : ";
cin>>c1;
int arr1[r1][c1];
for(int i=0;i<r1;i++){
for(int j=0;j<c1;j++){
cin>>arr1[i][j];
}}
cout<<"enter the size of second the row : ";
cin>>r2;
cout<<"enter the size of second the column : ";
cin>>c2;
int arr2[r2][c2];
for(int i=0;i<r2;i++){
for(int j=0;j<c2;j++){
cin>>arr2[i][j];
}}
if(c1!=r2){
cout<<"matrix multiplication is not possible"<<endl;
}
int arr3[r1][c2];
for(int i=0;i<r1;i++){
for(int j=0;j<c2;j++){
int ans=0;
for(int k=0;k<c1;k++){
ans+=arr1[i][k]*arr2[k][j];
arr3[i][j]=ans;
}}}
for(int i=0;i<r1;i++){
for(int j=0;j<c2;j++){
cout<<arr3[i][j]<<" ";
}cout<<endl;
}
return 0;
}
*/

//Q.2 Write a program to transpose a matrix
#include<iostream>
using namespace std;
int main(){
int m,n;
cout<<"enter the row : ";
cin>>m;
cout<<"enter the column : ";
cin>>n;
int arr[m][n];
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
cin>>arr[i][j];
}}
int transpose[n][m];
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
transpose[i][j]=arr[j][i];
}}
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
cout<<transpose[i][j]<<" ";
}cout<<endl;
}
return 0;
}
