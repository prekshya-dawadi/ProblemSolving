#include <iostream>
using namespace std;
template <typename T>
class Node
    {
    public:
        T data;
        Node<T> *next;
        Node()
        {
            this->data = 0;
            this->next = NULL;
        }
        Node(T data)
        {
            this->data = data;
            this->next = NULL;
        }
        Node(T data, Node<T>* next)
        {
            this->data = data;
            this->next = next;
        }
    };

int searchInLinkedList(Node<int> *head, int k) {
    Node<int> *next = head->next;
    int data = head->data;

    while (next != NULL){
        if(data == k){
            return 1;
        } else{
            head = next;
            data = head->data;
            next = head->next;
        }
    }

    if (next == NULL){
        if(data == k){
            return 1;
        } else{
            return 0;
        }
    }
}
