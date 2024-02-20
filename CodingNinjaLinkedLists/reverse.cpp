#include <iostream>

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};

Node *reverseLinkedList(Node *head)
{
    // Write your code here
    Node *pointer = head;
    Node *temp;
    while(pointer->next->next!=NULL){
        temp = pointer->next->next;
        pointer->next->next = pointer;
        pointer->next = temp;
    }
    head = pointer->next->next;
}
