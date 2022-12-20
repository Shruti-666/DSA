#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //implementation using constructor
    Node(int data){
        this->data = data;
        this -> next = NULL;
    }
};

//insert at head
void insert_head(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head=temp;
}

//insert at tail
void insert_tail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next=temp;
    tail=temp;

}

//insert at any position
void insert_middle(Node* tail,Node* &head,int pos, int d){
    if(pos==1){
        insert_head(head,d);
        return;
    }

    Node* temp = head;
    int count =1;
    
    if(temp->next==NULL){
        insert_tail(tail,d);
    }
    while(count<pos-1){
        temp = temp->next;
        count++;
    }

    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp ->next = nodetoinsert;
}

void print(Node* &head){
    Node* temp= head;

    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;

    }
}


int main(){
    int n;
    Node* node1 = new Node(5);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    //head pointed to node1;
    Node* head = node1;
    Node* tail = node1;
    insert_tail(tail,12);
 
    insert_tail(tail,10);
    // print(head);
    
    insert_middle(tail,head,1,19);
    print(head);
    cout<<endl;
    return 0;
}