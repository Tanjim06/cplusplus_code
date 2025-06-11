#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
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
vector<int> leftview(Node* root){
if(!root) return{};
queue<Node*> q;
q.push(root);
vector<int> ans;
while(!q.empty()){
    int n=q.size();
    ans.push_back(q.front()->data);
    while(n--){
        Node* temp=q.front();
        q.pop();
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}
return ans;
}
void lview(Node* root,int level,vector<int>&ans){
if(!root) return;
if(level==ans.size()){
    ans.push_back(root->data);
}
lview(root->left,level+1,ans);
lview(root->right,level+1,ans);
}
using namespace std;
int main(){
Node* root = binaryTree();
vector<int> a;
lview(root,0,a);
for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
}

return 0;
}
