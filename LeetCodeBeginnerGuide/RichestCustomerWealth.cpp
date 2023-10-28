// alternative 3: import math
#include <iostream>
#include <vector>
using namespace std;

vector<int> accounts[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
// leet-code problems use classes, hence this solution works. But to run it outside leetcode, 
// 1. Either the array must be constructed using classes
// 2. Or dimensions of the array must be explicitly passed to the function
// 3. Or use vectors instead of arrays: vectors are containers, and store elements just like arrays.
//      however, they are more dynamic, and offer a function called "size", that calculates the dimensions.
int maximumWealth(vector<int> accounts[][3]) {
    int max_wealth = 0;
    for (int i = 0; i<accounts.size(); i++){
        int wealth = 0;
        for (int j = 0; j<accounts[i].size(); j++){
            wealth += accounts[i][j];
        }
        wealth>max_wealth?max_wealth=wealth:max_wealth;
        //alternative 3: max_wealth = math.max(wealth, max_wealth)
    }
    return max_wealth;
}

int main(){
    int wealth = maximumWealth(accounts);
    cout<<"This is the wealth: "<< wealth <<endl;
}