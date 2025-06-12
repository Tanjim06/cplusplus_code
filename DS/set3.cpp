/*Q.1 Given n integers(can be duplicates), print the second smallest
integer.If it does not exist print -1.
*/
/*
#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
set<int> s;
for(auto val:v){
    s.insert(val);
}
auto itr=s.begin();
itr++;
cout<<"Second smallest number is "<<*itr;
return 0;
}
*/

/*Q.2 Given the number of question as n, and marks for the correct answer as p and q marks for
the incorrect answer.One can either attempt to solve the question in an examination and get
either p marks if the answer is right or q marks if the answer is wrong, or leave the question
unattended and get 0 marks.The task is to find the count of all the different possible marks
that once can score in the examination.
*/
#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
int n,p,q;
cin>>n>>p>>q;
unordered_set<int> us;
for(int i=0;i<=n;i++){
    for(int j=0;i<=n;j++){
        int correct=i;
        int incorrect=j;
        int unattended=n-(i+j);
        if(unattended>=0){
            int score=(correct*p)+(incorrect*q);
            us.insert(score);
        }
        else{
            break;
        }
    }
}
cout<<us.size();

return 0;
}
