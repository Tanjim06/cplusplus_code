#include<iostream>
#include<vector>
#include<list>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int x){
        this->data=x;
        left=right=NULL;
    }
};
void helper(list<vector<int>> &ans,vector<int> &arr,Node* root,int targetSum){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL){
        arr.push_back(root->data);
        if(root->data==targetSum){
            vector<int> a;
            for(int i=0;i<arr.size();i++){
                a.push_back(arr[i]);
            }
            ans.push_back(a);  
        }
        arr.pop_back();
        return;
    }
    arr.push_back(root->data);
    helper(ans,arr,root->left,targetSum-root->data);
    helper(ans,arr,root->right,targetSum-root->data);
    arr.pop_back();
}
list<vector<int>> pathsum2(Node* root,int targetSum){
    list<vector<int>> ans;
    vector<int> arr;
    helper(ans,arr,root,targetSum);
    return ans;
}
int main(){
   Node *root=new Node(5);
   Node *a=new Node(4);
   Node *b=new Node(8);
   Node *c=new Node(11);
   Node *d=new Node(13);
   Node *e=new Node(4);
   Node *f=new Node(7);
   Node *g=new Node(2);
   Node *h=new Node(1);
   Node *i=new Node(5);
   root->left=a;
   root->right=b;
   a->left=c;
   c->left=f;
   c->right=g;
   b->left=d;
   b->right=e;
   e->right=h;
   e->left=i;
   list<vector<int>> ans = pathsum2(root,22);
   for(auto const &vec:ans){
    cout<<"[";
    for(int num:vec){
        cout<<num<<" ";
    }
    cout<<"]";
   }
   cout<<endl;
   return 0;
}