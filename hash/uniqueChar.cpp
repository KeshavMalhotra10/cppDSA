//   +=====================================================+
//   |                 WRITE YOUR CODE HERE                |
//   | Description:                                        |
//   | - This function checks if a string 'str' has unique |
//   |   characters.                                       |
//   | - It uses an unordered_set for quick look-up.       |
//   | - It returns a boolean value.                       |
//   +=====================================================+

#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

bool hasUniqueChars(const string &str)
{
    unordered_set<char> mySet;
    for (auto c : str)
    {
        mySet.insert(c);
    }
    if (mySet.size() != str.size())
    {
        return false;
    }
    return true;
}