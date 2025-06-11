#include<iostream>
using namespace std;
int main(){
int n,s=0,d=0;
bool sturn = true;
cin>>n;
int leftmost=0,rightmost=n-1;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
while(leftmost<=rightmost){
    if(arr[leftmost]<arr[rightmost]){
        if(sturn){
            s+=arr[rightmost];
        }
        else{
            d+=arr[rightmost];
        }
    rightmost--;
    }

    else{
        if(sturn){
            s+=arr[leftmost];
        }
        else{
            d+=arr[leftmost];
        }
        leftmost++;
    }
    sturn = !sturn;
}
cout<<s<<" "<<d;
return 0;
}
