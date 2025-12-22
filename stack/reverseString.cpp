#include <iostream>
#include <stack>
using namespace std;
string reverseString(const string &str)
{
    stack<char> st;
    for (int i = 0; i < int(str.length()); i++)
    {
        st.push(str[i]);
    }
    string newString = "";
    for (int i = 0; i < int(str.length()); i++)
    {
        char character = st.top();
        newString += character;
        st.pop();
    }
    return newString;
}
int main()
{
    string str = "";
    cout << "Enter a string: ";
    cin >> str;
    string reversedString = reverseString(str);
    cout << reversedString << endl;
}

// Note to reverse a string we just push all characters into a stack, then pop them individually
// the string is now in reverse since a stack is last in first out