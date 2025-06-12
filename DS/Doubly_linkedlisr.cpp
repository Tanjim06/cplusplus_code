/*
#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* prev;
    Node* next;
    Node(int x){
        val = x;
        prev = NULL;
        next = NULL;
    }
};
class DoublyLinkedList{
public:
    Node* head;
    Node* tail;
    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }
    void insertNodeFirst(int val){
        Node* new_node = new Node(val);
        if(head==NULL){
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
    void insertNodeEnd(int val){
        Node* new_node = new Node(val);
        if(tail==NULL){
            head = NULL;
            tail = NULL;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }
    void insertNodeAny(int val,int k){
        Node* new_node = new Node(val);
        Node* temp = head;
        int cnt = 1;
        while(cnt<k-1){
            temp = temp->next;
            cnt++;
        }
        //now temp pointing to (k-1)th node
        new_node->next = temp->next;
        temp->next = new_node;
        new_node->prev = temp;
        new_node->next->prev = new_node;
    }
    void deleteAtFirst(){
        if(head==NULL){
            return;
        }
        Node* temp = head;
        head = head->next;
        if(head==NULL){
            tail = NULL;
            return;
        }
        else{
            head->prev= NULL;
        }
        free(temp);
    }
    void deleteAtEnd(){
        if(head==NULL){
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        if(tail==NULL){
            head = NULL;
        }
        else{
            tail->next = NULL;
            free(temp);
        }
    }
    void deleteAtAny(int k){
        Node* temp = head;
        int cnt = 1;
        while(cnt!=k){
            temp = temp->next;
            cnt++;
        }
        //now temp is pointing to kth node
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp = temp->next;
        }cout<<endl;
    }
};
void reverseIT(Node* &head,Node* &tail){
        Node* curr = head;
        while(curr!=NULL){
            Node* next = curr->next;
            curr->next = curr->prev;
            curr->prev = next;
            curr = next;
        }
        Node* new_head = tail;
        tail = head;
        head = new_head;
    }
bool isPalindrome(Node* head,Node* tail){
while(head!=tail && tail!=head->prev){
    if(head->val!=tail->val){
        return false;
    }
    head = head->next;
    tail = tail->prev;
    }
return true;
}
int main(){
Node* new_node = new Node(1);
DoublyLinkedList l1;
l1.head = new_node;
l1.tail = new_node;
l1.insertNodeFirst(2);
l1.insertNodeFirst(3);
l1.insertNodeFirst(4);
l1.display();
l1.insertNodeEnd(5);
l1.insertNodeEnd(6);
l1.display();
l1.insertNodeAny(9,4);
l1.display();
l1.deleteAtFirst();
l1.display();
l1.deleteAtEnd();
l1.display();
l1.deleteAtAny(3);
l1.display();
reverseIT(l1.head,l1.tail);
l1.display();
DoublyLinkedList l2;
l2.insertNodeFirst(1);
l2.insertNodeFirst(2);
l2.insertNodeFirst(3);
l2.insertNodeFirst(2);
l2.insertNodeFirst(1);
l2.display();
cout<<isPalindrome(l2.head,l2.tail);
return 0;
}
*/
/*Q.1 Given the head of a doubly linked list, delete the nodes whose neighbors have the same
value.Traverse the list from right to left.
*/
/*
#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* prev;
    Node* next;
    Node(int x){
        val = x;
        prev = NULL;
        next = NULL;
    }
};
class DoublyLinkedList{
public:
    Node* head;
    Node* tail;
    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }
    void insertNodeFirst(int val){
        Node* new_node = new Node(val);
        if(head==NULL){
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
    void insertNodeEnd(int val){
        Node* new_node = new Node(val);
        if(tail==NULL){
            head = NULL;
            tail = NULL;
            return;
        }
        new_node->prev = tail;
        tail->next = new_node;
        tail = new_node;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp = temp->next;
        }cout<<endl;
    }
};
void deleteSameNeighbor(Node* &head,Node* &tail){
Node* curr = tail->prev;
while(curr!=head){
    Node* prev = curr->prev;
    Node* next = curr->next;
    if(prev->val==next->val){
        prev->next = next;
        next->prev = prev;
        free(curr);
    }
    curr = prev;
}
}

int main(){
DoublyLinkedList l1;
l1.insertNodeFirst(2);
l1.insertNodeEnd(1);
l1.insertNodeEnd(1);
l1.insertNodeEnd(2);
l1.insertNodeEnd(1);
l1.display();
deleteSameNeighbor(l1.head,l1.tail);
l1.display();
return 0;
}
*/

/*Q.2 A critical point in a linked list as either a local maxima or local minima.
Given a linked list tail, return an array of length of 2 containing
[minDistance,maxDistance] where minDistance is the minimum distance between any
two distinct critical points.If there are fewer than two critical points return
[-1,-1].
Note that a node only be a local maxima/minima if there exists both a previous
node and a next node.
*/
/*
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
class Node{
public:
    int val;
    Node* prev;
    Node* next;
    Node(int x){
        val = x;
        prev = NULL;
        next = NULL;
    }
};
class DoublyLinkedList{
public:
    Node* head;
    Node* tail;
    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }
    void insertNodeFirst(int val){
        Node* new_node = new Node(val);
        if(head==NULL){
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
    void insertNodeEnd(int val){
        Node* new_node = new Node(val);
        if(tail==NULL){
            head = NULL;
            tail = NULL;
            return;
        }
        new_node->prev = tail;
        tail->next = new_node;
        tail = new_node;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp = temp->next;
        }cout<<endl;
    }
};
bool isCritical(Node* &curr){
if(curr->val<curr->next->val && curr->val<curr->prev->val){
    return true;
}
if(curr->val>curr->next->val && curr->val>curr->prev->val){
    return true;
}
return false;
}
vector<int> dist(Node* &head,Node* &tail){
vector<int> ans(2,INT_MAX);
int first = -1;
int last = -1;
Node* curr = tail->prev;
if(curr==NULL){
    ans[0] = ans[1] = -1;
    return ans;
}
int currPos = 0;
while(curr->prev!=NULL){
    if(isCritical(curr)){
        if(first==-1){
            first = currPos;
        }
        else{
            ans[0] = min(ans[0],currPos-last);
            ans[1] = currPos - first;
            last = currPos;
        }
    }
    currPos++;
    curr = curr->prev;
}
if(ans[0]==INT_MAX){
    ans[0] = ans[1] = -1;
    return ans;
}
return ans;
}

int main(){
DoublyLinkedList l1;
l1.insertNodeFirst(1);
l1.insertNodeEnd(5);
l1.insertNodeEnd(2);
l1.insertNodeEnd(6);
l1.insertNodeEnd(3);
l1.display();
vector<int> ans = dist(l1.head,l1.tail);
cout<<ans[0]<<" "<<ans[1];
return 0;
}
*/

/*Q.3 Given head of a linked list.The values of the linked list are sorted in
non-decreasing order.Find of there exists a pair of distinct nodes such that
the sum of their values x.Return the pair in the form of a vector[l,r] where
l and r are the values stored in the two nodes pointed by the pointer.If there
are multiple such pairs,return any of them.If there is no such pairs return
[-1,-1].
*/
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
class Node{
public:
    int val;
    Node* prev;
    Node* next;
    Node(int x){
        val = x;
        prev = NULL;
        next = NULL;
    }
};
class DoublyLinkedList{
public:
    Node* head;
    Node* tail;
    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }
    void insertNodeFirst(int val){
        Node* new_node = new Node(val);
        if(head==NULL){
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
    void insertNodeEnd(int val){
        Node* new_node = new Node(val);
        if(tail==NULL){
            head = NULL;
            tail = NULL;
            return;
        }
        new_node->prev = tail;
        tail->next = new_node;
        tail = new_node;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp = temp->next;
        }cout<<endl;
    }
};
vector<int> sum(Node* &head,Node* &tail,int x){
vector<int> ans(2,-1);
if(head==NULL){
    return ans;
}
while(head!=tail){
    int sum =head->val+tail->val;
    if(sum==x){
        ans[0] = head->val;
        ans[1] = tail->val;
        return ans;
    }
    else if(sum>x){
        tail = tail->prev;
    }
    else{
        head = head->next;
    }
}
return ans;
}
int main(){
int x;
DoublyLinkedList l1;
l1.insertNodeFirst(2);
l1.insertNodeEnd(5);
l1.insertNodeEnd(6);
l1.insertNodeEnd(8);
l1.insertNodeEnd(10);
l1.display();
cout<<"Enter the value of x : "<<endl;
cin>>x;
vector<int> ans = sum(l1.head,l1.tail,x);
cout<<ans[0]<<" "<<ans[1];
return 0;
}
