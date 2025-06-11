//Q.1 given an matrix ,return all elements of the matrix in spiral order.
/*
#include<iostream>
#include<vector>
using namespace std;
void spiralOrder(vector<vector<int>>& vec){
int top=0;
int bottom=vec.size()-1;
int left=0;
int right=vec[0].size()-1;
int direction=0;
while(left<=right && top<=bottom){
//left to right
if(direction==0){
for(int i=left;i<=right;i++){
cout<<vec[top][i]<<" ";
}top++;
}
//top to bottom
else if(direction==1){
for(int i=top;i<=bottom;i++){
cout<<vec[i][right]<<" ";
}right--;
}
//right to left
else if(direction==2){
for(int i=right;i>=left;i--){
cout<<vec[bottom][i]<<" ";
}bottom--;
}
else{
for(int i=bottom;i>=top;i--){
cout<<vec[i][left]<<" ";
}left++;
}
direction=(direction+1)%4;
}}

int main(){
int m,n;
cout<<"enter the size of row : ";
cin>>m;
cout<<"enter the size of column : ";
cin>>n;
vector<vector<int>> vec1(m,vector<int>(n));
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
cin>>vec1[i][j];
}}
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
cout<<vec1[i][j]<<" ";
}cout<<endl;
}
spiralOrder(vec1);
return 0;
}
*/

//Q.2 Given a positive integer n, generate a nXn matrix filled with elements from 1 to n^2 in spiral order.
#include<iostream>
#include<vector>
using namespace std;
int n;
vector<vector<int>> createSpiralMatrix (int n){
vector<vector<int>> vec(n, vector<int>(n));
int left=0;
int right=n-1;
int top=0;
int bottom=n-1;
int direction=0;
int value=1;
while(left<=right && top<=bottom){
//left to right
if(direction==0){
for(int i=left;i<=right;i++){
vec[top][i]=value++;
}top++;
}
else if(direction==1){
for(int i=top;top<=bottom;i++){
vec[i][right]=value++;
}right--;
}
else if(direction==2){
for(int i=right;i>=left;i--){
vec[bottom][i]=value++;
}bottom--;
}
else{
for(int i=bottom;i>=top;i--){
vec[i][left]=value++;
}left++;
}
direction=(direction+1)%4;
}
return vec;
}
int main(){
cout<<"enter the row/column size : ";
cin>>n;
vector<vector<int>> vec1(n,vector<int>(n));
vec1=createSpiralMatrix(n);
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
cout<<vec1[i][j]<<" ";
}cout<<endl;
}
return 0;
}

