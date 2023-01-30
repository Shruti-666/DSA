//reverse a linked list?
void LinkedList::reverseList()
{
    Node *next=_head;
    Node *prev=0;
    while(next!=0)
    {
        Node *tmp=next->_next;
        next->_next=prev;
        _head = next;
        prev=next;
        next=tmp;
    }
}


