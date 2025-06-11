#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        bool isgood=true;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            if(x==1 || x==3){
                isgood=false;
            }
        }
        if(isgood){
            a.push_back(i+1);
        }
    }
     cout<<a.size()<<endl;
     for(int car:a){
        cout<<car<<" ";
     }
    cout<<endl;
    return 0;
}