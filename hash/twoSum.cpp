#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

//   +=====================================================+        |
//   | Description:                                        |
//   | - This function finds two numbers in 'nums' that    |
//   |   sum up to the given 'target'.                     |
//   | - It uses an unordered_map for quick look-up.       |
//   | - It returns the indices of the numbers that add    |
//   |   up to the target.                                 |
//   +=====================================================+

vector<int> twoSum(const vector<int> &nums, int target)
{
    unordered_map<int, int> myMap;
    for (int i = 0; i < int(nums.size()); i++)
    {
        int needed = target - nums[i];

        if (myMap.count(needed))
        { // if the needed value exists as a key
            return vector<int>{myMap[needed], i};
        }

        myMap[nums[i]] = i; // here we set the value to the index, so we can search up value and get index later
    }
    return vector<int>{};
}
