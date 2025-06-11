#include<iostream>
#include<queue>
#include<vector>
#include<climits>
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
void find(Node* root,int p,int &l,int &r){
if(!root) return;
l=min(l,p);
r=max(r,p);
find(root->left,p-1,l,r);
find(root->right,p+1,l,r);
}
vector<int>topview(Node* root){
int l=0,r=0;
find(root,0,l,r);
vector<int> ans(r-l+1);
vector<int> filled(r-l+1,0);
queue<Node*> q;
queue<int> index;
q.push(root);
index.push(-1*l);
while(!q.empty()){
    Node* temp=q.front();
    q.pop();
    int pos=index.front();
    index.pop();
    if(!filled[pos]){
        filled[pos]=1;
        ans[pos]=temp->data;
    }
    if(temp->left){
        q.push(temp->left);
        index.push(pos-1);
    }
    if(temp->right){
        q.push(temp->right);
        index.push(pos+1);
    }
}
return ans;
}
void Tview(Node* root,int pos,vector<int>&ans,vector<int>&level,int l){
if(!root) return;
if(level[pos]>l){
    ans[pos]=root->data;
    level[pos]=l;
}
Tview(root->left,pos-1,ans,level,l+1);
Tview(root->right,pos+1,ans,level,l+1);
}
vector<int> topview1(Node* root){
int l=0,r=0;
find(root,0,l,r);
vector<int> ans(r-l+1);
vector<int> level(r-l+1,INT_MAX);
Tview(root,-1*l,ans,level,l);
return ans;
}
int main(){
Node* root=binaryTree();
vector<int> ans=topview1(root);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
return 0;
}
