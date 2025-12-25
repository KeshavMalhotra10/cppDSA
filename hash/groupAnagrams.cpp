#include <iostream>
#include <vector>
#include <unordered_map>>
#include <string>
using namespace std;

vector<vector<string>> groupAnagrams(const vector<string> &strings)
{
    unordered_map<string, vector<string>> anagramGroups;
    for (auto str : strings)
    {
        string canonical = str;
        // sort the string, sort permanently changes the word, so no copy is needed
        sort(canonical.begin(), canonical.end());

        // anagramGroups is a hashmap,
        // our key for the hashmap is the sorted word, and the value is the initial word which gets added to the vector of strings
        anagramGroups[canonical].push_back(str);
    }
    vector<vector<string>> result;
    for (auto group : anagramGroups)
    {
        result.push_back(group.second);
        // group.first indicates the key, group.second indicates the value
        // we want to push the vector which is the value, so we use group.second
    }
    return result;
}