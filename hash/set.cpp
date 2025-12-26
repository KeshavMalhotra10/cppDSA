#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> mySet = {1, 2, 3, 4, 5};

    // adding elements to a set, note that two will not be added since no duplicates exist
    mySet.insert(6);
    mySet.insert(2);

    for (auto i : mySet)
    {
        cout << i << endl;
    }

    if (mySet.find(2) != mySet.end())
    {
        cout << "The number 2 exists in the set" << endl;
    }

    // Erasing a number
    mySet.erase(4);

    for (auto i : mySet)
    {
        cout << i << endl;
    }
    // clear all values in the set
    mySet.clear();
    for (auto i : mySet)
    {
        cout << i << endl;
    }
    cout << "No items remaining, the size is: " << mySet.size() << endl;
}
