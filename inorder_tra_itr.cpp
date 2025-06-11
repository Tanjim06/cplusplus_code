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
vector<int>in(Node* root){
stack<Node*>s;
stack<bool>visited;
s.push(root);
visited.push(0);
vector<int>ans;
while(!s.empty()){
    Node* temp=s.top();
    s.pop();
    bool flag=visited.top();
    visited.pop();
    if(!flag){
        if(temp->right){
            s.push(temp->right);
            visited.push(0);
        }
        s.push(temp);
        visited.push(1);
        if(temp->left){
            s.push(temp->left);
            visited.push(0);
        }
    }
    else{
        ans.push_back(temp->data);
    }

}
return ans;
}
int main(){
Node* root;
root=binaryTree();
vector<int>ans=in(root);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
return 0;
}
