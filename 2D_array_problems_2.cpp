//Q.1Given a boolean 2d array,where each row is sorted.Find the row with maximum number of 1's.
/*
#include<iostream>
#include<vector>
using namespace std;
int maximumOnes(vector<vector<int>> &vec){
int maxOnes=0,maxOnesrowInd=-1;
int col=vec[0].size();
for(int i=0;i<vec.size();i++){
for(int j=0;j<vec[i].size();j++){
if(vec[i][j]==1){
int numberOfOnes=col-j;
if(numberOfOnes>maxOnes){
maxOnes=numberOfOnes;
maxOnesrowInd=i;
}}}}
return maxOnesrowInd;
}
int main(){
int m,n;
cout<<"enter the row size : ";
cin>>m;
cout<<"enter the column size : ";
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
int result=maximumOnes(vec1);
cout<<"the result is : "<<result<<endl;
return 0;
}
*/
//Q.1.1 Alternate aproach
/*
#include<iostream>
#include<vector>
using namespace std;
int leftMostOneRow(vector<vector<int>> &vec){
int leftMostOne=0;
int maxOneRow=-1;
//finding the left most one in 0th row
for(int j=vec.size()-1;j>vec[0].size();j--){
if(vec[0][j]==1){
leftMostOne=j;
maxOneRow=0;
}
else{
break;
}}
//check in rest of the rows if we can find a one left to the leftMostOne
for(int i=1;i<vec.size();i++){
for(int j=vec.size()-1;j>vec.size();j--){
if(vec[i][j]==1){
leftMostOne=j;
maxOneRow=i;
}}}
return maxOneRow;
}
int main(){
int m,n;
cout<<"enter the row : ";
cin>>m;
cout<<"enter the column : ";
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
int result=leftMostOneRow(vec1);
cout<<result<<endl;
return 0;
}
*/
//Q.2 given a square matrix , turn it by 90 degrees in a clockwise direction without using any extra space.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n;
void rotateArray(vector<vector<int>>& vec){
//part-1 tarnspose
for(int i=0;i<n;i++){
for(int j=0;j<i;j++){
swap(vec[i][j],vec[j][i]);
}}
//part-2 reverse every row
for(int i=0;i<n;i++){
reverse(vec[i].begin(),vec[i].end());
}return;
}
int main(){
cout<<"enter the row or column size of the square matrix : ";
cin>>n;
vector<vector<int>> vec1(n,vector<int>(n));
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
cin>>vec1[i][j];
}}
rotateArray(vec1);
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
cout<<vec1[i][j]<<" ";
}cout<<endl;
}
return 0;
}
