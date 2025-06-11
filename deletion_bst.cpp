#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
void del(Node *root, int target)
{
    if (root == NULL)
        return;
    if (root->data > target){
        if (root->left == NULL) return;
        if (root->left->data == target){
            if (root->left->left == NULL && root->left->right == NULL){
                root->left = NULL;
            }
            else if(root->left->left!=NULL && root->right!=NULL){
                Node* temp=root->left->left;
                root->left=root->left->right;
                root->left->left=temp;
            }
            else if (root->left->left == NULL || root->left->right == NULL){
                if (root->left->right != NULL)
                    root->left = root->left->right;
                else
                    root->left = root->left->left;
            }
        }
        else{
            del(root->left, target);
        }
    }
    else{ // target>root->value
        if (root->right == NULL) return;
        if (root->right->data == target){
            if (root->right->left == NULL && root->right->right == NULL)
            {
                root->right = NULL;
            }
            else if(root->right->left!=NULL && root->right->right!=NULL){
                Node* temp=root->right->right;
                root->right=root->right->left;
                root->right->right=temp;
            }
            else if (root->right->left == NULL || root->right->right == NULL){
                if (root->right->left != NULL){
                    root->right = root->right->left;
                }
                else{
                    root->right = root->right->right;
                }
            }
        }
        else{
            del(root->right, target);
        }
    }
}
void display(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    display(root->left);
    display(root->right);
}
int main()
{
    Node *root = new Node(50);
    Node *a = new Node(20);
    Node *b = new Node(60);
    Node *c = new Node(17);
    Node *d = new Node(34);
    Node *e = new Node(55);
    Node *f = new Node(89);
    Node *g = new Node(10);
    Node *h = new Node(28);
    Node *i = new Node(70);
    Node *j = new Node(14);
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->left = e;
    b->right = f;
    c->left = g;
    d->left = h;
    f->left = i;
    g->right = j;
    display(root);
    cout << endl;
    del(root, 50);
    display(root);
    return 0;
}