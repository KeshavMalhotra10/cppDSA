#include <iostream>
#include <stack>
using namespace std;

// balanced: (), ()(), (())

// Unbalanced: ((), ()), (()))

bool isBalancedPar(const string &par)
{
    stack<char> st;
    for (int i = 0; i < int(par.length()); i++)
    {
        if (par[i] == '(' && i != int(par.length()) - 1)
        {
            st.push(par[i]);
        }
        else if (par[i] == ')' && !st.empty())
        {
            st.pop();
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string par = "";
    cout << "Enter balanced parentheses: ";
    cin >> par;
    bool val = isBalancedPar(par);
    cout << val << endl;
}