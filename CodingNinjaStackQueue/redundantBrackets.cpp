#include <iostream>
#include <string>
#include <vector>

class Stack {
public:
    int tos = -1;
    std::vector<char> stck;

    Stack(){}

    void push(char c) {
        tos = tos + 1;
        stck.push_back(c);
    }

    char pop(){
        char topOfStack;
        topOfStack = stck[tos];
        tos = tos - 1;
        return topOfStack;
    }

    bool isEmpty(){
        bool Empty = false;
        if(tos == -1){
            Empty = true;
        }
        return Empty;
    }
};

bool findRedundantBrackets(std::string &s) {
    Stack str;
    bool redundant = false;
    std::string stack;

    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {
            break;
        }
        if (s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' ) {
            str.push(s[i]);
        }
        if (s[i] == ')') {
            stack = "";
            while (!str.isEmpty() && str.stck[str.tos] != '(') {
                stack = stack + str.pop();
            }

            if (stack == ""){
                redundant = true;
                return redundant;
            }
        }
    }
    return redundant;
}

int main() {
    std::string s = "";
    bool redundant = false;
    std::cout << "Enter the expression: " << std::endl;
    std::cin >> s;
    redundant = findRedundantBrackets(s);
    std::cout << redundant << std::endl;
}
