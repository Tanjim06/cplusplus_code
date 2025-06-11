#include<iostream>
using namespace std;
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

    int c=0;
    for(int i=0;i<n;i++){
        if(str[i]=='1') c++;
    }
    if(n==1 && str[0]=='1') cout<<0<<endl;
    else if(n==1 && str[0]=='0')cout<<1<<endl;
    else if(c<n)cout<<c+n<<endl;
    else cout<<c<<endl;
}

return 0;
}
