//separate chaining
#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;
class Hashing{
    public:
    vector<list<int> > hashtable;
    int size;
    Hashing(int x){
        size=x;
        hashtable.resize(size);
    }
    int hashvalue(int key){
        return key%size;
    }
    void add(int key){
        int idx=hashvalue(key);
        hashtable[idx].push_back(key);
    }
    list<int>::iterator search(int key){
        int idx=hashvalue(key);
        return find(hashtable[idx].begin(),hashtable[idx].end(),key);
    }
    void deleteKey(int key){
        int idx=hashvalue(key);
        if(search(key)!=hashtable[idx].end()){
            hashtable[idx].erase(search(key));
            cout<<key<<" is deleted"<<endl;
        } 
        else{
            cout<<"Key is not present"<<endl;
        }   
    }
};
int main(){
    Hashing *h=new Hashing(10);
    h->add(682);
    h->add(761);
    h->add(494);
    h->add(567);
    h->add(869);
    h->add(634);
    h->add(794);
    h->deleteKey(567);
    h->deleteKey(567);


    return 0;
}