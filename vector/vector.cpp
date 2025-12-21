// Vector is a dynamically resizable array
#include <iostream>
#include <vector>
// include vector allows us to use the vector datatype
using namespace std;

int main()
{
    // we don't need to define vector size
    // we can shrink or expand with no problems

    // vector<datatype> name = {val1 ... valn};
    // NOTE: val1 ... valn must be the same type
    vector<int> v1 = {1, 2, 3, 4};
    cout << v1[1] << endl;         // returns element at index 1
    cout << v1.front() << endl;    // returns first element in vector
    cout << v1.back() << endl;     // returns last element in vector
    cout << v1.size() << endl;     // gets how many elements in the vector
    cout << v1.capacity() << endl; // gets how many elements can be held currently in the vector
    v1.push_back(9);
    cout << v1.capacity() << endl;
    v1.pop_back();
    cout << v1.capacity() << endl;

    // Note: Capacity doubles once capacity is full(4->8->16->32)
    // the capacity does not shrink by itself

    v1.shrink_to_fit();
    cout << v1.capacity() << endl;
    // capacity shrunk to 4

    // what if I want to insert a beginning
    vector<int> v2 = {1, 2, 3, 4, 5};
    v1.insert(v1.begin(), 5);      // inserted at index 0
    v1.insert(v1.begin() + 1, 10); // inserted at index 1
    cout << endl;
    cout << v1[0] << endl;
    cout << v1[1] << endl;
    v1.erase(v1.begin());  // delete at index 0
    v1.erase(v1.begin());  // deleted at index 1
    cout << v1[0] << endl; // now we back to starting

    // iterating through a vector
    vector<int> v3 = {10, 20, 30, 40};
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << endl;
    }
}
