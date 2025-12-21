#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        next = nullptr;
    }
};

class Stack
{
private:
    Node *top;
    int height;

public:
    Stack(int value)
    {
        Node *newNode = new Node(value);
        top = newNode;
        height = 1;
    }

    void printStack()
    {
        Node *temp = top;
        while (temp)
        {
            cout << temp->value << endl;
            temp = temp->next;
        }
    }

    void push(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        height++;
    }

    int pop()
    {
        if (height == 0)
            return INT_MIN; // when we get this absurd value, we know the stack is empty
        Node *temp = top;
        int poppedValue = temp->value;
        top = top->next;
        delete temp;
        height--;

        return poppedValue;
    }
    void getTop()
    {
        cout << "Top: " << top->value << endl;
    }

    void getHeight()
    {
        cout << "Height: " << height << endl;
    }
};
int main()
{
    Stack *myStack = new Stack(4);
    myStack->push(14);
    myStack->push(10);
    cout << "Popped value: " << myStack->pop() << endl;
    cout << "Popped value: " << myStack->pop() << endl;
    cout << "Popped value: " << myStack->pop() << endl;
    cout << "Popped value: " << myStack->pop() << endl;
}