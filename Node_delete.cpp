#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insert(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next=temp;
    tail=temp;
}

void print(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



int main(){
    Node* node = new Node(1);

    Node* head= node;
    Node* tail=node;

    insert(tail,2);
    insert(tail,3);
    insert(tail,4);
    print(head);
    cout<<"\nhead "<<head->data<<endl;
    cout<<"tail "<<tail->data;
    cout<<endl;

}