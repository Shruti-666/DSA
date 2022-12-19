#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
    };

void linkedlist_traversal(struct Node* ptr){
    while(ptr!=NULL){
        cout<<"Element : "<<ptr->data<<endl;
        ptr= ptr->next;
    }
    
}

int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    //allocate memory for nodes in the linkedlist in heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    //link first and second nodes
    head->data=7;
    head->next=second;

    //link second to third
    second->data=11;
    second->next=third;

    //terminate the list 
    third->data=66;
    third->next=NULL;
    linkedlist_traversal(head);
}