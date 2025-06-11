#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int untreated_crimes=0;
int available_officers=0;
for(int i=0;i<n;i++){
    int event;
    cin>>event;
    //crime has occured
    if(event==-1){
        //if officers available then use them
        if(available_officers>0){
            available_officers--;
        }
        //if officers not available then increase untreated crime use them
        else{
            untreated_crimes++;
        }
    }
    //if no crime occurs and officers recruited then add them
    else{
        available_officers+=event;
    }
}
cout<<untreated_crimes<<endl;
return 0;
}
