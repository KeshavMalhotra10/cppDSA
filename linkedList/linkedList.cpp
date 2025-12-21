// The following code is how to fully implement a singly linked list
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
    ~LinkedList() // destructor(deletes all nodes + the length & node pointers by default)
    {
        Node *temp = head;
        while (head)
        {
            head = head->next;
            delete temp;
            temp = head;
        }
    }
    void append(int value)
    {
        // create a node
        Node *newNode = new Node(value);
        // if linkedList is empty, then make head and tail point to the newNode
        if (length == 0)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            // have last node in linked list point to the new node
            tail->next = newNode;
            tail = newNode;
        }
        length++;
    }

    void deleteLast()
    {
        if (length == 0)
            return;
        Node *temp = head;
        if (length == 1)
        {
            head = nullptr;
            tail = nullptr;
        }
        else
        {
            Node *pre = head;
            while (temp->next)
            {
                pre = temp;
                temp = temp->next;
            }
            tail = pre;
            tail->next = nullptr;
        }
        delete temp;
        length--;
    }
    void prepend(int value)
    {
        Node *newNode = new Node(value);
        if (length == 0)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
        length++;
    }

    void deleteFirst()
    {
        Node *temp = head;
        if (length == 0)
            return;
        else if (length == 1)
        {
            head = nullptr;
            tail = nullptr;
        }
        else
        {
            head = head->next;
        }
        delete temp;
        length--;
    }
    Node *get(int index)
    {
        Node *temp = head;
        if (index < 0 || index >= length)
            return nullptr;
        else
        {
            for (int i = 0; i < index; i++)
            {
                temp = temp->next;
            }
            return temp;
        }
    }
    bool set(int index, int value)
    {
        Node *temp = get(index);
        if (temp)
        {
            temp->value = value;
            return true;
        }
        return false;
    }

    bool insert(int index, int value)
    {
        if (index < 0 || index > length)
            return false;
        else if (index == 0)
        {
            prepend(value);
            return true;
        }
        else if (index == length)
        {
            append(value);
            return true;
        }
        Node *newNode = new Node(value);
        Node *temp = get(index - 1);
        temp->next = newNode->next;
        temp->next = newNode;
        length++;
        return true;
    }

    void deleteNode(int index)
    {
        if (index < 0 || index >= length)
            return;
        else if (index == 0)
        {
            return deleteFirst();
        }
        else if (index == (length - 1))
        {
            return deleteLast();
        }
        else
        {
            Node *prev = get(index - 1);
            Node *temp = prev->next;
            prev->next = temp->next;
            delete temp;
            length--;
        }
    }

    void reverse()
    {
        Node *temp = head;
        head = tail;
        tail = temp;
        Node *after = temp->next;
        Node *before = nullptr;
        for (int i = 0; i < length; i++)
        {
            after = temp->next;
            temp->next = before;
            before = temp;
            temp = after;
        }
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
    LinkedList *myLinkedList = new LinkedList(1);
    myLinkedList->append(2);
    myLinkedList->append(3);
    myLinkedList->append(4);
    myLinkedList->reverse();
    myLinkedList->printList();
}