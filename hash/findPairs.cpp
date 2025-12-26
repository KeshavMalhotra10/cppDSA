#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<vector<int>> findPairs(const vector<int> &arr1, const vector<int> &arr2, int target)
{
    unordered_set<int> mySet1;
    vector<vector<int>> resultantVector;
    for (auto i : arr1)
    {
        mySet1.insert(i);
    }
    unordered_set<int> mySet2;
    for (auto i : arr2)
    {
        mySet2.insert(i);
    }
    for (auto i : mySet1)
    {
        int needed = target - i;
        if (mySet2.find(needed) != mySet2.end())
        {
            resultantVector.push_back({i, needed});
        }
    }
    return resultantVector;
    //   +=========================================================+
    //   |                 WRITE YOUR CODE HERE                    |
    //   | Description:                                            |
    //   | - This function finds all pairs of integers from        |
    //   |   'arr1' and 'arr2' that sum up to 'target'.            |
    //   | - It uses an unordered_set for quick look-up.           |
    //   | - It returns a 2D vector containing the pairs.          |
    //   |                                                         |
    //   | Return type: vector<vector<int>>                        |
    //   |                                                         |
    //   | Tips:                                                   |
    //   | - 'mySet' stores numbers from 'arr1'.                   |
    //   | - 'pairs' will store the pairs that meet the target.    |
    //   | - Loop through 'arr1' to populate 'mySet'.              |
    //   | - Loop through 'arr2' to find pairs.                    |
    //   | - Use 'find' method for quick look-up in set.           |
    //   | - Check output from Test.cpp in "User logs".            |
    //   +=========================================================+
}
