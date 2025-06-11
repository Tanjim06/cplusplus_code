//Q.1 Given a matrix of dimension nXm and 2 coordinates(l1,r1)and(l2,r2). Return the sum of the rectangle from(l1,r1) to (l2,r2)
/*
#include<iostream>
#include<vector>
using namespace std;
int rectangSum(vector<vector<int>> vec,int l1,int r1,int l2,int r2){
int sum=0;
for(int i=l1;i<=l2;i++){
for(int j=r1;j<=r2;j++){
sum=sum+vec[i][j];
}}
return sum;
}
int main(){
int m,n,l1,r1,l2,r2;
cout<<"enter row size: ";
cin>>m;
cout<<"enter column size : ";
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
cout<<"enter l1 :";
cin>>l1;
cout<<"enter r1 :";
cin>>r1;
cout<<"enter l2 :";
cin>>l2;
cout<<"enter r2 :";
cin>>r2;
cout<<"the sum is : "<<rectangSum(vec1,l1,r1,l2,r2);
return 0;
}
*/

//Q.1.1 Anothe method
/*
#include<iostream>
#include<vector>
using namespace std;
int rectangSum(vector<vector<int>>vec,int l1,int r1,int l2,int r2){
int sum=0;
//prefix sum matrix row wise
for(int i=0;i<vec.size();i++){
for(int j=1;j<vec[0].size();j++){
vec[i][j]+=vec[i][j-1];
}}
for(int i=l1;i<=l2;i++){
if(r1!=0){
sum+=vec[i][r2]-vec[i][r1-1];
}
else{
sum+=vec[i][r2];
}}
return sum;
}
int main(){
int m,n,l1,r1,l2,r2;
cout<<"Enter the row size : ";
cin>>m;
cout<<"Enter the column size : ";
cin>>n;
cout<<"enter l1 : ";
cin>>l1;
cout<<"enter r1 : ";
cin>>r1;
cout<<"enter l2 : ";
cin>>l2;
cout<<"enter r2 : ";
cin>>r2;
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
cout<<rectangSum(vec1,l1,r1,l2,r2);
return 0;
}
*/
//Q.1.2 Another method
#include<iostream>
#include<vector>
using namespace std;
int rectangSum(vector<vector<int>> vec,int l1,int r1,int l2,int r2){
int sum=0,top_sum=0,left_sum=0,topleft_sum=0;
//prefix sum row wise
for(int i=0;i<vec.size();i++){
for(int j=1;j<vec.size();j++){
vec[i][j]+=vec[i][j-1];
}}
//prefix sum column wise
for(int i=1;i<vec.size();i++){
for(int j=0;j<vec.size();j++){
vec[i][j]+=vec[i-1][j];
}}
if(r1!=0 && l1!=0)topleft_sum=vec[l1-1][r1-1];
if(r1!=0)left_sum=vec[l2][r1-1];
if(l1!=0)top_sum=vec[l1-1][r2];
sum=vec[l2][r2]-vec[l1-1][r2]-vec[l2][r1-1]+vec[l1-1][r1-1];
return sum;
}
int main(){
int m,n,l1,r1,l2,r2;
cout<<"Enter the row size : ";
cin>>m;
cout<<"Enter the column size : ";
cin>>n;
cout<<"enter l1 : ";
cin>>l1;
cout<<"enter r1 : ";
cin>>r1;
cout<<"enter l2 : ";
cin>>l2;
cout<<"enter r2 : ";
cin>>r2;
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
cout<<rectangSum(vec1,l1,r1,l2,r2);
return 0;
}


