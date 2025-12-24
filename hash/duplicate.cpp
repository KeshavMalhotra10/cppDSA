#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> findDuplicates(const vector<int> &nums)
{
    unordered_map<int, bool> myMap;
    vector<int> duplicates;
    for (auto i : nums)
    {
        if (myMap.count(i) > 0)
        { // count(i) tells us how many times the element shows up in the hashmap, if > 0 then it is a duplicate
            duplicates.push_back(i);
        }
        else
        {
            myMap.insert({i, 1});
        }
    }
    return duplicates;
}

int main()
{
    vector<int> vect1 = {1, 2, 3, 4, 5, 6, 4, 3, 1, 10, 9};

    vector<int> duplicates = findDuplicates(vect1);
    for (auto i : duplicates)
    {
        cout << i << endl;
    }
}