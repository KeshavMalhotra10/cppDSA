#include <iostream>
#include <vector>
using namespace std;
class Heap
{
private:
    vector<int> heap;
    // our calculations will be incremented by 1,
    // since I want to start at index 0

    int leftChild(int index)
    {
        return (2 * index) + 1;
    }

    int rightChild(int index)
    {
        return (2 * index) + 2;
    }

    int parent(int index)
    {
        return (index - 1) / 2; // note this is integer division
    }
    void swap(int index1, int index2)
    {
        int temp = heap[index1];
        heap[index1] = heap[index2];
        heap[index2] = temp;
    }
};
int main()
{
}
