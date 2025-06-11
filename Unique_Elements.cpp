#include<iostream>
#include<set>
using namespace std;
int main(){
    int arr[]={1, 2, 3, 2, 1, 4, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    cout<<st.size();
    return 0;
}