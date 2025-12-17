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

class LinkedList
{
private:
    Node *head; // pointer to a node
    Node *tail;
    int length;

public:
    LinkedList(int value)
    {
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
        length = 1;
    }

    void printList()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->value << endl;
            temp = temp->next;
        }
    }

    void getHead() const
    {
        cout << "Head: " << head->value << endl;
    }

    void getTail() const
    {
        cout << "Tail: " << tail->value << endl;
    }

    void getLength() const
    {
        cout << "Length: " << length << endl;
    }
};

int main()
{
    LinkedList *myLinkedList = new LinkedList(4);
    myLinkedList->getHead();
    myLinkedList->getTail();
    myLinkedList->getLength();
    myLinkedList->printList();
}