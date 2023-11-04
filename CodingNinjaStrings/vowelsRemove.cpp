#include <bits/stdc++.h> 
#include <algorithm>
#include <string>
using namespace std;

string removeVowels(string inputString) {
    string new_string;
    for(int i=0; i<inputString.length(); i++){
        char charac = tolower(inputString[i]);
        if (charac != 'a' && charac != 'e' && charac != 'i' && charac != 'o' && charac != 'u'){
            new_string += inputString[i];
        }
    }
    return new_string;
}

int main(){
    string str = removeVowels("Mobile");
    cout<<str<<endl;
    return 0;
}