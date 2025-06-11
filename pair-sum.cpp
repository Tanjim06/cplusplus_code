#include<iostream>
#include<unordered_set>
using namespace std;
int main(){ 
    int arr[]={1, 4, 5, 11};
    int target=9;
    int n=sizeof(arr)/sizeof(arr[0]);
    unordered_multiset<int>st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    for(int i=0;i<n;i++){
        if(st.find(target-arr[i])!=st.end()){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}