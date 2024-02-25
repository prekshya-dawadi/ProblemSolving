#include <bits/stdc++.h> 
#include <vector>

class Deque
{
public:
    int size;
    int front = -1;
    int rear = -1;
    std::vector<int> deque;
    // Initialize your data structure.
    Deque(){}
    Deque(int n)
    {
        // Write your code here.
        size = n;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        // Write your code here.
        if(!this.isFull()){
            for (int i = this->size; i>=0; i--){
                deque[i+1] = deque[i];
            }
            deque[front] = x;
            return true;
        }
        return false;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        // Write your code here.
        if(!this->isFull()){
            rear = rear + 1;
            deque[rear] = x;
            return true;
        }
        return false;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        int value = 0;
        // Write your code here.
        if(!this->isEmpty()){
            value = deque[front];
            front += 1;
        }
        return value;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        int value = 0;
        if(!this->isEmpty()){
            // Write your code here.
            value = deque[rear];
            rear -= 1;
        }
        return value;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        // Write your code here.
        if(front == rear == -1){
            return -1;
        }else{
            return deque[front];
        }
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        // Write your code here.
        if(front == rear == -1){
            return -1;
        }else{
            return deque[rear];
        }
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        // Write your code here.
        if(front == rear == -1){
            return true;
        }
        return false;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        // Write your code here.
        if (rear >= size){
            return true;
        }
        return false;
    }
};

int main(){
    Deque deque(10);
    bool empty = deque.isEmpty();
    std::cout << empty << std::endl;
    bool pushfront = deque.pushFront(10);
    std::cout << "pushfront: "<< pushfront << std::endl;
    pushfront = deque.pushFront(20);
    std::cout << "pushfront: "<< pushfront << std::endl;
    bool pushrear = deque.pushRear(30);
    std::cout << "pushrear" << pushrear << std::endl;
    bool getfront = deque.getFront();
    std::cout << "getfront:" << getfront << std::endl;
    int poprear = deque.popRear();
    std::cout << "poprear: " << poprear << std::endl;
    poprear = deque.popRear();
    std::cout << "poprear: " << poprear << std::endl;
}