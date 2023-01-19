#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
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

//traversal
void Traversal(Node* head){
    Node* temp = head;

    cout<<"Linked List : ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//insertion at head
void insertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next=head;
    head->prev= temp;
    head=temp;
}

//insertion at end
void insertAtEnd(Node* &tail,int d){
    Node* temp = new Node(d);
    temp->prev = tail;
    tail->next= temp;
    tail=temp;
}

//insert at any position
void insertAtAnyPosition(Node* head,Node* tail, int pos, int d){
    if(pos==1){
        insertAtHead(head,d);
        return;
    }

    Node* temp = head;
    int count =1;
    
    if(temp->next==NULL){
        insertAtEnd(tail,d);
    }

    while(count<pos-1){
        temp = temp->next;
        count++;
    }

    Node* nodetoinsert = new Node(d);
    temp->next->prev=nodetoinsert;
    nodetoinsert->next= temp->next;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;
}

//deletionn
void deleteNode(int pos, Node* &head){
    if(pos==1){
        Node* temp = head;
        temp->next->prev= NULL;
        head=temp->next;
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

        current->prev=NULL;
        previous->next=current->next;
        current->next=NULL;
        delete current;

        
    }
}

int main(){
    Node* n1= new Node(2);
    Node* head = n1;
    Node* tail = n1;
    Traversal(head);

    insertAtHead(head,5);
    Traversal(head);

    insertAtEnd(tail,10);
    Traversal(head);

    insertAtAnyPosition(head,tail,2,9);
    Traversal(head);

    insertAtAnyPosition(head,tail,3,11);
    Traversal(head);

    deleteNode(3,head);
    Traversal(head);

    cout<<endl;

}