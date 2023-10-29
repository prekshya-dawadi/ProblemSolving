#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    std::vector<int> arr;
    for (int i = 1; i < nums.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                arr = {i, j};
                return arr;
            }
        }
    }
    arr = {-1};
    return arr;
}

int main(){
    vector<int> nums = {1, 2, 3};
    int target = 3;
    twoSum(nums, target);
}