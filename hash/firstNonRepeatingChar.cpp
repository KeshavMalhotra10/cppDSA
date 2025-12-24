//   +======================================================+            |
//   | Description:                                         |
//   | - This function finds the first non-repeating char   |
//   |   in a given string.                                 |
//   | - It uses an unordered_map to count char occurrences |
//   | - Loops through the string to check counts.          |
//   |                                                      |
//   +======================================================+

// Comment this is actually a good problem, I was stuck for a while.
#include <iostream>
#include <unordered_map>>
#include <string>
using namespace std;

char firstNonRepeatingChar(const string &input_string)
{
    unordered_map<char, int> myMap;
    for (auto i : input_string)
    {
        if (myMap.count(i) == 0)
        {
            myMap.insert({i, 1});
        }
        else
        {
            myMap[i]++;
        }
    }
    for (auto i : input_string)
    {
        if (myMap[i] == 1)
            return i;
    }
    return '\0';
}

int main()
{
    string myString = "Hello";
    char nonRepeatChar = firstNonRepeatingChar(myString);
    cout << nonRepeatChar << endl;
}