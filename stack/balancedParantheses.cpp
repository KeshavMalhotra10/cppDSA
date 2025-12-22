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
        if (par[i] == '(')
        {
            st.push('(');
        }
        else if (par[i] == ')')
        {
            if (st.empty())
            {
                return false;
            }
            st.pop();
        }
    }
    if (st.empty())
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