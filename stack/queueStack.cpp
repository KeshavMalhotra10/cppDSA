// This code will implement a queue with stacks

#include <stack>
#include <climits>

using namespace std;

class QueueUsingTwoStacks
{
private:
    stack<int> stack1, stack2;

public:
    int front()
    {
        if (stack2.empty())
        {
            while (!stack1.empty())
            {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }

        if (stack2.empty())
        {
            return INT_MIN;
        }

        return stack2.top();
    }

    bool isEmpty()
    {
        return stack1.empty() && stack2.empty();
    }
    void enqueue(int value)
    {
        if (stack1.empty())
            stack1.push(value);
        else
        {
            while (!stack1.empty())
            {
                int shift = stack1.top();
                stack1.pop();
                stack2.push(shift);
            }
            while (!stack2.empty())
            {
                int lastShift = stack2.top();
                stack2.pop();
                stack1.push(lastShift);
            }
        }
    }
    void dequeue()
    {
        if (stack2.empty())
        {
            while (!stack1.empty())
            {
                int pushValue = stack1.top();
                stack1.pop();
                stack2.push(pushValue);
            }
        }
        if (!stack2.empty())
        {
            stack2.pop();
        }
    }
};
