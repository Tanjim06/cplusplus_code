#include<iostream>
using namespace std;
class MaxHeap{
    int *arr;
    int size;   //size of heap
    int total_size;    //size of array
public:
    MaxHeap(int n){
        arr=new int[n];
        size=0;
        total_size=n;
    }
    void insert(int n){
        if(size==total_size) {
            cout<<"Heap overflow\n";
            return;
        }
        arr[size]=n;
        int index=size;
        size++;
        while(index>0 && arr[(index-1)/2]<arr[index]){
            swap(arr[(index-1)/2],arr[index]);
            index=(index-1)/2;
        }
        cout<<arr[index]<<" inserted in the heap\n";
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void Heapify(int i){
        int largest=i;
        int left=2*i+1;
        int right=2*i+2;
        if(left<size&&arr[left]>arr[largest]){
            largest=left;
        }
        if(right<size&&arr[right]>arr[largest]){
            largest=right;
        }
        if(largest!=i){
            swap(arr[i],arr[largest]);
            Heapify(largest);
        }

    }
    void del(){
        if(size==0){
            cout<<"Heap underflow\n";
            return;
        }
        cout<<arr[0]<<" deleted from the heap\n";
        arr[0]=arr[size-1];
        size--;
        if(size==0) return;
        Heapify(0);
    }
};
int main(){
MaxHeap h1(6);
h1.insert(1);
h1.insert(2);
h1.insert(3);
h1.insert(4);
h1.insert(5);
h1.insert(6);
h1.print();
h1.del();
h1.print();
return 0;
}
