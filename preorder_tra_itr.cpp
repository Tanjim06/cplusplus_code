#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Node{
public:
int data;
Node* left;
Node* right;
Node(int x){
data=x;
left=right=NULL;
}
};
Node* binaryTree(){
int x;
cin>>x;
if(x==-1) return NULL;
Node* temp=new Node(x);
cout<<"Enter the left child of "<<x<<endl;
temp->left=binaryTree();
cout<<"Enter the right child of "<<x<<endl;
temp->right=binaryTree();
return temp;
}
vector<int>pre(Node* root){
stack<Node*> s;
s.push(root);
vector<int> ans;
while(!s.empty()){
    Node* temp=s.top();
    s.pop();
    ans.push_back(temp->data);
    if(temp->right){
        s.push(temp->right);
    }
    if(temp->left){
        s.push(temp->left);
    }
}
return ans;
}
int main(){
Node* root;
root=binaryTree();
vector<int> ans=pre(root);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
return 0;
}
