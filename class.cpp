#include <iostream>
#include <string>
using namespace std;

class Cookie
{
private:
    string colour;

public:
    Cookie(string colour)
    {
        this->colour = colour;
    }
};

int main()
{
    Cookie *cookieOne = new Cookie("green");
}
