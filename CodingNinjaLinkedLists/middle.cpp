#include <iostream>
#include <cmath>
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

Node *findMiddle(Node *head)
{
    // Write your code here
    Node *pointer = head;
    int count = 0, mid;
    while(pointer!=NULL){
        pointer = pointer->next;
        count += 1;
    }
    count%2 == 0?mid = ceil(count/2):mid=count/2;
    
    pointer = head;
    for (int i = 0; i<mid; i++){
        pointer = pointer->next;
    }

    return pointer;
}
