#include <iostream>
#include <algorithm>
using namespace std; 

int main(){
    int array[3] = {1,2,3};
    int *max = max_element(array, array+2);
    cout<<max<<endl;
}