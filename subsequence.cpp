#include<iostream>
#include<cstring>
using namespace std;
bool check(string a,string b){
    int i=0;
    for(int j=0;j<b.size();j++){
        if(a[i]==b[j]){
            i++;
        }
        else{
            j++;
        }
        if(i==a.size()) return true;
    }
    return false;
}
int main(){
    string a,b;
    cin>>a>>b;
    cout<<check(a,b);

    return 0;
}