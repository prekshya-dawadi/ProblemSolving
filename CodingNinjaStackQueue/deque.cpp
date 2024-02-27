#include <bits/stdc++.h> 

class Deque
{
    public:
        int size;
        int front = -1;
        int rear = -1;
        int *deque;
    // Initialize your data structure.
    Deque(int n)
    {
        // Write your code here.
        size = n;
        int deque[n] = {0};
        std::cout<<"deque successfully initialized. "<<std::endl;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        // Write your code here.
        if(!this->isFull()){
            if (front == -1) {
                front = 0;
                rear = 0;
                deque[front] = x;
            } else{
                for(int i = 0; i<this->size; i++){
                    deque[i+1] = deque[i];
                }
            }
            std::cout<<"pushFront successful in its operation. "<<std::endl;
            return true;
        }
        std::cout<<"pushFront returns false.";
        return false;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        // Write your code here.
        if(!this->isFull()){
            if (rear == -1) {
                front = 0;
                rear = 0;
            }      
            rear = (rear + 1)%size;
            deque[rear] = x;
            std::cout<<"pushRear returns true. "<<std::endl;
            return true;
        }
        std::cout<<"pushrear returns false. "<<std::endl;
        return false;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        int value = -1;
        // Write your code here.
        if(!this->isEmpty()){
            value = deque[front];
            if (front == rear) {
                // The deque becomes empty after the pop
                front = -1;
                rear = -1;
            } else {
                front = (front+1)%size;
            }
        }
        std::cout<<"Front successfully popped. "<<std::endl;
        return value;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        int value = 0;
        if(!this->isEmpty()){
            // Write your code here.
            value = deque[rear];
            if (front == rear) {
                // The deque becomes empty after the pop
                front = -1;
                rear = -1;
            } else {
                rear -= 1;
            }
        }
        std::cout<<"rear successfully popped. "<<std::endl;
        return value;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        // Write your code here.
        if(front == -1 && rear == -1){
            std::cout<<"getfront returns empty. "<<std::endl;
            return -1;
        }else{
            std::cout<<"getfront returns front value. "<<std::endl;
            return deque[front];
        }
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        // Write your code here.
        if(front == -1 && rear == -1){
            std::cout<<"getrear returns empty. "<<std::endl;
            return -1;
        }else{
            std::cout<<"getrear returns rear value. "<<std::endl;
            return deque[rear];
        }
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        // Write your code here.
        if(front == -1 && rear == -1){
            std::cout<<"isEmpty returns empty."<<std::endl;
            return true;
        }
        std::cout<<"isEmpty returns not empty."<<std::endl;
        return false;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        // Write your code here.
        if (rear >= size){
            std::cout<<"isFull returns true. "<<std::endl;
            return true;
        }
        std::cout<<"isFull returns false. "<<std::endl;
        return false;
    }
};

int main(){
    Deque deque(10);
    bool empty = deque.isEmpty();
    std::cout << "return empty status: "<< empty << std::endl;
    bool pushfront = deque.pushFront(10);
    std::cout << "pushfront: "<< pushfront << std::endl;
    pushfront = deque.pushFront(20);
    std::cout << "pushfront: "<< pushfront << std::endl;
    bool pushrear = deque.pushRear(30);
    std::cout << "pushrear" << pushrear << std::endl;
    int getfront = deque.getFront();
    std::cout << "getfront:" << getfront << std::endl;
    int poprear = deque.popRear();
    std::cout << "poprear: " << poprear << std::endl;
    poprear = deque.popRear();
    std::cout << "poprear: " << poprear << std::endl;
}