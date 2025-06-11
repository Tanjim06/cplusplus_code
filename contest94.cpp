#include<iostream>
using namespace std;
int main(){
    int h,m,s;
    string a;
    cin>>h>>m>>s>>a;
    int total=(h*3600)+(m*60)+s;
    if(a=="PM"){
        total+=12*3600;
    }
    cout<<total<<endl;
    return 0;
}