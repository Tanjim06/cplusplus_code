#include<iostream>
#include<queue>
#include<stack>
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
vector<int> LevelOrder(Node* root){
queue<Node*> q;
q.push(root);
vector<int> ans;
Node* temp;
while(!q.empty()){
    temp=q.front();
    q.pop();
    ans.push_back(temp->data);
    if(temp->left){
        q.push(temp->left);
    }
    if(temp->right){
        q.push(temp->right);
    }
}
return ans;
}
void totalm1(Node* root,int &c){
if(root==NULL){
    return;
}
c++;
totalm1(root->left,c);
totalm1(root->right,c);
}
int getSize(Node* root){
int c=0;
totalm1(root,c);
return c;
}
int totalm2(Node* root){
if(root==NULL){
    return 0;
}
return 1+totalm2(root->left)+totalm2(root->right);
}
int totals1(Node* root){
if(root==NULL){
    return 0;
}
return root->data+totals1(root->left)+totals1(root->right);
}
void totals2(Node* root,int &sum){
if(root==NULL){
    return;
}
sum+=root->data;
totals2(root->left,sum);
totals2(root->right,sum);
}
int getsum(Node* root){
int sum=0;
totals2(root,sum);
return sum;
}
void countleaf(Node* root,int &c){
if(root==NULL){
    return;
}
if(!root->left && !root->right){
    c++;
    return;
}
countleaf(root->left,c);
countleaf(root->right,c);
}
int getleaf(Node* root){
int c=0;
countleaf(root,c);
return c;
}
int countleafm1(Node* root){
if(root==NULL){
    return 0;
}
if(!root->left && !root->right){
    return 1;
}
return countleafm1(root->left)+countleafm1(root->right);
}
int Nonleaf(Node* root){
if(root==NULL){
    return 0;
}
if(!root->left && !root->right){
    return 0;
}
return 1+Nonleaf(root->left)+Nonleaf(root->right);
}
int height(Node* root){
if(root==NULL){
    return 0;
}
return 1+max(height(root->left),height(root->right));
}
bool isIdentical(Node* r1,Node* r2){
if(r1==NULL && r2==NULL){
    return 1;
}
if((!r1 && r2)||(r1 && !r2)){
    return 0;
}
if(r1->data!=r2->data){
    return 0;
}
return isIdentical(r1->left,r2->left)&&isIdentical(r1->right,r2->right);
}
void mirror(Node* root){
if(!root) return;
Node* temp=root->right;
root->right=root->left;
root->left=temp;
mirror(root->left);
mirror(root->right);
}
int heights(Node* root,bool &valid){
if(!root) return 0;
int l=height(root->left);
int r=height(root->right);
if(abs(l-r)>1){
    valid=0;
}
return 1+max(l,r);
}
int isbalance(Node* root){
bool valid=1;
heights(root,valid);
return valid;
}
vector<int> spiralOrder(Node* root){
if(!root) return {};
stack<Node*> s1; //rl
stack<Node*> s2; //lr
s1.push(root);
vector<int> ans;
while(!s1.empty()||!s2.empty()){
    if(!s1.empty()){
        Node* temp=s1.top();
        s1.pop();
        ans.push_back(temp->data);
        if(temp->left){
            s2.push(temp->left);
        }
        if(temp->right){
            s2.push(temp->right);
        }
    }
    else{
        if(!s2.empty()){
            Node* temp=s2.top();
            s2.pop();
            ans.push_back(temp->data);
            if(temp->left){
                s1.push(temp->left);
            }
            if(temp->right){
                s1.push(temp->right);
            }
        }
    }
}
return ans;
}
bool parent(Node* root,int a,int b){
if(!root) return 0;
if(root->left && root->right){
    if(root->left->data==a && root->right->data==b){
        return 1;
    }
    if(root->left->data==b && root->right->data==a){
        return 1;
    }
}
return parent(root->left,a,b)||parent(root->right,a,b);
}
bool isCousin(Node* root,int a,int b){
queue<Node*> q;
q.push(root);
int l1=-1,l2=-1;
int level=0;
while(!q.empty()){
    int n=q.size();
    while(n--){
        Node* temp=q.front();
        q.pop();
        if(temp->data==a){
            l1=level;
        }
        if(temp->data==b){
            l2=level;
        }
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    level++;
    if(l1!=l2){
        return 0;
    }
    if(l1!=-1){
        break;
    }
}
return !parent(root,a,b);
}
int main(){
Node* root = binaryTree();
//Node* root2 = binaryTree();
/*
vector<int> ans;
ans=LevelOrder(root);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
*/
//cout<<getSize(root);
//cout<<totalm2(root);
//cout<<totals1(root);
//cout<<getsum(root);
//cout<<getleaf(root);
//cout<<countleafm1(root);
//cout<<Nonleaf(root);
//cout<<height(root);
//cout<<isIdentical(root,root2);
//mirror(root);
/*
vector<int> ans;
ans=LevelOrder(root);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
*/
//cout<<isbalance(root);
/*
vector<int> ans=spiralOrder(root);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
*/
cout<<isCousin(root,2,3);
return 0;
}
