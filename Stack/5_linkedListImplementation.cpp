#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class Stack
{
    Node *head;
    int size;

    Stack()
    {
        head = NULL;
        size = 0;
    }

    void push(int val)
    {
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }
    void pop()
    {
        if (head == NULL)
        {
            cout << "Stack is empty." << endl;
        }
        size--;
    }

    int top()
    {
        if (head == NULL)
            cout << "Stack is empty" << endl;
        return head->data;
    }
};

int main()
{

    return 0;
}