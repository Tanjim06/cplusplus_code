#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int count=0;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]=='x'){
                count++;
            }
        }
    }
    cout<<count<<endl;

    return 0;
}