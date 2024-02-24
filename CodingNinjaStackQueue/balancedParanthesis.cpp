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

    void pop(){
        tos = tos - 1;
    }

    bool isEmpty(){
        bool Empty = false;
        if(tos == -1){
            Empty = true;
        }
        return Empty;
    }
};

bool balancedParanthesis(std::string &s) {
    Stack str;
    std::string temp = "";
    bool balanced = true;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            str.push(s[i]);
            temp = temp + s[i];
        }
        if(((s[i] == ')' && str.stck[str.tos] == '(') || (s[i] == '}' && str.stck[str.tos] == '{')||(s[i] == ']' && str.stck[str.tos] == '['))){
            if(str.isEmpty()){
                balanced = false;
                return balanced;
            }
            str.pop();
        }
    }

    if (!str.isEmpty()){
        balanced = false;
        return balanced;
    }
    return balanced;
}

int main() {
    std::string s = "";
    std::cout << "Enter the expression: " << std::endl;
    std::cin >> s;
    bool result = balancedParanthesis(s);
    std::cout<<"Result: "<< result << std::endl;
}
