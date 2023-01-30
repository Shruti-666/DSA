#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int* arr;
    int qfront;
    int size;
    int rear;
    public:
        Queue(){
        size = 10000;
        arr = new int[size];
        qfront = -1;
        rear = -1;
    }

    void enQueue(int data){
        if(rear<size){
            arr[rear]=data;
            rear++;
        }
        else{
            cout<<"Overflow"<<endl;
        }
        
    }
    void deQueue(){
        if(qfront==rear){
            cout<<"Queue Underflow....Queue is empty"<<endl;
        }
        else{
            arr[qfront]=-1;
            qfront++;
        }

    }
    
    int Front(){
        if(qfront==rear){
            return -1;
        }
        else{
            return arr[qfront];
        }
    }

    // int isEmpty(){

    // }

    
};

int main(){
    Queue q = Queue();
    q.enQueue(15);
    q.enQueue(7);
    q.enQueue(6);

    cout<<q.Front()<<endl;

    q.deQueue();
    cout<<q.Front()<<endl;

    q.deQueue();
    cout<<q.Front()<<endl;
    return 0;
}