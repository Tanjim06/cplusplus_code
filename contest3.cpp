#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int n,s=0;
cin>>n;
int p[n];
for(int i=0;i<n;i++){
    cin>>p[i];
    s+=p[i];
}

double result = static_cast<double>(s)/n;
cout<<fixed<<setprecision(12)<<result<<endl;
return 0;
}
