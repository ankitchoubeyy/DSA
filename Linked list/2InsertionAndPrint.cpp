#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    // Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

// Insertion at head
void insertAtHead(Node* &head, int data){
    // new node creation
    Node *temp = new Node(data);

    //updating new node->next and head
    temp->next = head;
    head = temp;
}

// Insert at tail
void insertAtTail(Node* &tail, int data){
    // new node creation
    Node *temp = new Node(data);

    tail->next = temp;
    tail = temp;
}

void printLinkedList(Node* &head){
    Node *temp = head;

    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    // new node creation
    Node *node1 = new Node(12);

    // head and tail is pointing towards 1st node
    Node *head = node1;
    Node *tail = node1;

    // Insert at head
    // insertAtHead(head,40);
    // insertAtHead(head,70);

    // Insert at tail
    insertAtTail(tail, 80);
    insertAtTail(tail, 90);

    // print
    printLinkedList(head);

    return 0;
}