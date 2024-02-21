#include <iostream>
#include <string>
#include <vector>

class Stack {
public:
    int tos;
    std::vector<char> stck;

    Stack() : tos(-1) {}

    void push(char c) {
        tos = tos + 1;
        stck.push_back(c);
    }
};

bool findRedundantBrackets(std::string &s) {
    Stack str;
    bool reverse = false;

    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {
            break;
        }
        if (s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == ')') {
            str.push(s[i]);
        }
        if (!str.stck.empty() && (str.stck[str.tos] == '(' && s[i] == ')')) {
            reverse = true;
            return reverse;
        }
    }
    return reverse;
}

int main() {
    std::string s = "";
    bool reverse = false;
    std::cout << "Enter the expression: " << std::endl;
    std::cin >> s;
    reverse = findRedundantBrackets(s);
    std::cout << reverse << std::endl;
}
