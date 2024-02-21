#include <iostream>
#include <string>
using namespace std;

//Following function will get the string as an argument and find out whether its numeric or not.

void numericstring(string str){

  cout << "Is string '" << str << "' is a numeric string?" << endl;
  // Following loop will check each character of string. If any character is not a digit, it will change flag to false.
  bool flag = true;  //We initialise flag as true.
  for (int i=0; i<str.length(); i++){
    if (isdigit(str[i]) == false){
      flag = false;
      break;
    }
  }

  if (flag == true){  // It means that the previous for loop found each character to be a digit.
    cout << "True" << endl;
  }
  else{ // It means that the previous for loop found a non-digit character.
    cout << "False" << endl;
  }
}

int main() {
  string str;
  str = "1234";   // A numeric string
  numericstring(str); // String passed to the function
  
  cout << "\n" << string(100, '-') << "\n\n";  // Line break

  string str1; 
  str1 = "12 34";  // A non-numeric string
  numericstring(str1);  // String passed to the function

  return 0;
}