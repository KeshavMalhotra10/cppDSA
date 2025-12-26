//   +=====================================================+
//   |                                                     |
//   | Description:                                        |
//   | - This function removes duplicate integers from a   |
//   |   given vector 'myList'.                            |
//   | - It uses an unordered_set for quick look-up and    |
//   |   elimination of duplicates.                        |
//   | - Returns a vector of unique integers.              ||
//   +=====================================================+

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> removeDuplicates(const vector<int> &myList)
{
    unordered_set<int> mySet;
    for (auto i : myList)
    {
        mySet.insert(i);
    }
    vector<int> v(mySet.begin(), mySet.end());
    return v;
}