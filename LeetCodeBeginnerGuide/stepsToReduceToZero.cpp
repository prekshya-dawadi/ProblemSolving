#include <iostream>
using namespace std;

int numberOfSteps(int num)
{
    int counter = 0;
    while (num > 0)
    {
        if (num % 2 == 0)
        {
            num = num / 2;
        }
        else
        {
            num -= 1;
        }
        counter += 1;
    }
    return counter;
}

int main(){
    cout << numberOfSteps(14)<<endl;
}