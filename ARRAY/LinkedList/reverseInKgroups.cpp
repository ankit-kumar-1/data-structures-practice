#include<iostream>
using namespace std;

class Node{
    
    public:
    int data;
    Node*Next; 

    Node(int data)
    {
        this->data=data;
        this->Next=NULL;
    }
};

void insertAtHead(Node* &head, int d)
{
    Node* newNode = new Node(d);

    newNode->Next = head;
    head = newNode;
}

void traverse(Node* &head)
{
    Node* curr = head;
    while(curr->Next!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->Next;
    }
    cout<<endl;
}

int main()
{
    Node* b = new Node(5); 

    Node* head = b;

    cout<<b->data <<" ";

    insertAtHead(head,4);
    insertAtHead(head,7);
    
    traverse(head);

    return 0;
}