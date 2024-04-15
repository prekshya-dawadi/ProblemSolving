#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string stringSum(string &num1, string &num2){
    int i, j, result=0, digit1=0, digit2=0, carry = 0;
    string n1;
    string n2;
    i = num1.length();
    j = num2.length();

    while (i>= 0 || j>=0){
        if (i>=0)
            digit1 = int(num1[i]);
        else 
            digit1 = 0;
        if (j>=0)
            digit2 = int(num2[i]);
        else 
            digit2 = 0;
        
        result = digit1 + digit2 + carry
        
        
    }

    int carry = 0;
    // sum
    
    return to_string(result);
}

int main(){
    string num1, num2, result;
    cout<< "Enter Number 1: "<< endl;
    cin >> num1;
    cout<< "Enter Number 2: "<< endl;
    cin >> num2;
    result = stringSum(num1, num2);
    cout << "The sum is: "<< result;
}