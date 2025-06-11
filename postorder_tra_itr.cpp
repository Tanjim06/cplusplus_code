#include<iostream>
#include<vector>
#include<stack>
#include<queue>
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
vector<int>post(Node* root){
stack<Node*> s;
s.push(root);
vector<int> ans;
while(!s.empty()){
    Node* temp=s.top();
    s.pop();
    ans.push_back(temp->data);
    if(temp->left){
        s.push(temp->left);
    }
    if(temp->right){
        s.push(temp->right);
    }
}
return ans;
}
int main(){
Node* root;
root=binaryTree();
vector<int> ans=post(root);
for(int i=ans.size()-1;i>=0;i--){
    cout<<ans[i]<<" ";
}

return 0;
}
