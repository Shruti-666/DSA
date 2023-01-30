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

    //destructor
    ~Node(){
        int value = this->data;
        //memory free
        if(this->next !=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for data "<<value<<endl;
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

void delete_node(int pos,Node* &head){

    if(pos==1){
        Node* temp = head;
        head= head->next;

        //memory free
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* current = head;
        Node* previous = NULL;

        int count =1;
        while(count<pos){
            previous= current;
            current = current->next;
            count++;
        }

        previous->next=current->next;
        current->next=NULL;
        delete current;
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
    delete_node(4,head);

    print(head);
    cout<<endl;

}