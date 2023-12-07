#include <iostream>
#include <string>
using namespace std;

string convertString(string str) 
{
	str[0] = toupper(str[0]);
	for (int i=0; i<=str.size(); i++){
		if (str[i] == ' '){
			str[i+1] = toupper(str[i+1]);
		}
	}
	return str;
}

int main(){
    string str = convertString("I am prekshya.");
    cout << str << endl;
    return 0;
}