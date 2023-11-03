#include <iostream>
#include <string> 
using namespace std;

string encode(string message)
{
    int count = 0;
    // int char_counter = 1;
    string rle_result = "";
    while (count < message.length()){
        int char_counter = 1;
        while (message[count] == message[count+1]){
            char_counter += 1;
            count++;
        }
        if(message[count]!= message[count+1]){
            rle_result += message[count] + to_string(char_counter);
            count++;
        }
    }
    return rle_result;
}

int main(){
    string input;
    cout << "Enter a string to be encoded: " << endl;
    cin >> input;
    string result = encode(input);
    cout << result << endl;
    return 0;
}