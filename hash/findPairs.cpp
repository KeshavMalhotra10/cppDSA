//   +=========================================================+
//   | Description:                                            |
//   | - This function finds all pairs of integers from        |
//   |   'arr1' and 'arr2' that sum up to 'target'.            |
//   | - It uses an unordered_set for quick look-up.           |
//   | - It returns a 2D vector containing the pairs.          |
//   |                                                         |
//   | Return type: vector<vector<int>>                        |
//   +=========================================================+

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<vector<int>> findPairs(const vector<int> &arr1, const vector<int> &arr2, int target)
{
    unordered_set<int> mySet;
    vector<vector<int>> pairs;

    // populate mySet
    for (auto i : arr1)
    {
        mySet.insert(i);
    }

    // loop through arr2 to find pairs
    for (auto i : arr2)
    {
        int needed = target - i;
        if (mySet.find(needed) != mySet.end())
        {
            pairs.push_back({i, needed});
        }
    }
    return pairs;
}