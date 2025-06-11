#include<iostream>
using namespace std;
char dir(int left,int right){
     int netTurns=(right-left) % 4; 
    if (netTurns<0) netTurns += 4;    
    char directions[]={'E', 'S', 'W', 'N'};
    return directions[netTurns];  
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char str[n];
        for(int i=0;i<n;i++){
            cin>>str[i];
        }
        int left=0,right=0;
        for(int i=0;i<n;i++){
            if(str[i]=='0') right++;
            else left++;
        }
        cout<<dir(left,right)<<endl;
    }
    return 0;
}