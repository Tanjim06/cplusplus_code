//#include<iostream>
//#include<vector>
//using namespace std;
//int main(){
/*
vector<int> v1={1,2,3};
vector<int> v2={4,5};
vector<int> v3={6,7};
//creating a 2d vector from v1,v2,v3
vector<vector<int>> vec1={v1,v2,v3};
for(int i=0;i<vec1.size();i++){
for(int j=0;j<vec1.size();j++){
cout<<vec1[i][j]<<" ";
}
cout<<endl;
}
*/
/*
//2d vector creating with given size

int m,n;
cout<<"enter the row of the vector : ";
cin>>m;
cout<<"enter the column of the vector : ";
cin>>n;
vector<vector<int>> vec1(m,vector<int>(m));
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
cin>>vec1[i][j];
}}
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
cout<<vec1[i][j]<<" ";
}cout<<endl;
}
return 0;
}
*/

//Q.2 given an integer n,return the first n rows of pascal triangles
//code issue
/*
#include<iostream>
#include<vector>
using namespace std;
int fact(int n) {
if(n > 1)
return n * fact(n - 1);
else
return 1;
}
int main(){
int n;
cout<<"enter the digit : ";
cin>>n;
vector<vector<int>> vec1(n,vector<int>(n));
for(int i=0;i<n;i++){
for(int j=0;j<vec1[i].size();j++){
int iCj=0;
iCj=(fact(i)/fact(j)*(fact(i-j)));
vec1[i][j]=iCj;
//cout<<iCj<<" ";
cout<<vec1[i][j]<<" ";
}cout<<endl;
}
return 0;
}
*/

//Q.1.1 another method
#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> pascalTriangle(int n){
vector<vector<int>> pascal(n);
for(int i=0;i<n;i++){
int ith_vector=pascal[i];
ith_vector.resize(i+1);
for(int j=0;j<i+1;j++){
if(j==0 || j==1){
pascal[i][j]=1;
}
else{
pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];
}}}
return pascal;
}
int main(){
int n;
cout<<"enter digit: ";
cin>>n;
vector<vector<int>> vec1(n,vector<int>(n));
vec1=pascalTriangle(n);
for(int i=0;i<n;i++){
for(int j=0;j<vec1[i]size();j++){
cout<<vec1[i][j];
}
}
return 0;
}

