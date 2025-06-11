#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int c=0;
int score;
cin >> score;
int best = score;
int worst = score;
for(int i=1;i<n;i++){
    cin>>score;
    if(score>best){
        c++;
        best=score;
    }
    else if(score<worst){
        c++;
        worst=score;
    }
}
cout<<c;
return 0;
}
