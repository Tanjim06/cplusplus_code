#include<iostream>
using namespace std;
int main(){ 
    int n,l,a;
    cin>>n>>l>>a;
    int prev=0,break_count=0;
    for(int i=0;i<n;i++){
        int ti,li;
        cin>>ti>>li;
        break_count=break_count+(ti-prev)/a;
        prev=ti+li;
    }
    break_count=break_count+(l-prev)/a;
    cout<<break_count<<endl;
    return 0;
} 