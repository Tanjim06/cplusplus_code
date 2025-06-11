#include<iostream>
#include<algorithm>
using namespace std;
int area(int arr[],int n){
    int l=0;
    int r=n-1;
    int area=0;
    while(l<r){
        int height=min(arr[l],arr[r]);
        int width=r-l;
        area=max(area,(height*width));
        if(arr[l]<arr[r]){
            l++;
        }
        else{
            r--;
        }
    }
    return area;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<area(arr,n);


    return 0;
}