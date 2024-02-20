#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string stringSum(string &num1, string &num2){
    int len1, len2, result=0;
    string n1;
    string n2;
    len1 = num1.length();
    len2 = num2.length();

    cout <<n1 << " " << n2 << endl;
    for (int i = 0; i<len1; i++){
        // n1 += num1[i] * pow(10, i);
        n1 = num1[1];
        cout << n1<<endl;
    }
    for (int i = 0; i<len2; i++){
        // n2 += num2[i] * pow(10, i);
        n2 = num2[0];
        cout << n2<<endl;
    }
    // result = n1 + n2;
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