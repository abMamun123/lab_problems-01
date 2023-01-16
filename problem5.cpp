/**
 *author:xyz_123
 *created:14-01-2023(11:30:50)
 **/
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
};
class LinkedList
{
public:
    Node *head;
    int count;
    LinkedList()
    {
        head = NULL;
        count = 0;
    };
    Node *create_new_node(int value)
    {
        Node *newNode = new Node;
        newNode->value = value;
        newNode->next = NULL;
        return newNode;
    }
    void InsertAtHead(int value)
    {
        Node *a = create_new_node(value);
        // if head = null;
        if (head == NULL)
        {
            head = a; // head a k point kore thakbe
            return;
        }
        // if head = not null;
        a->next = head;
        head = a;
        count++;
    };
    int getSize()
    {
        return count;
    }
    void swapFirst()
    {
        Node *a = head;
        int temp = a->value;
        int b = a->next->next->value;
        cout<<temp<<b;
        int c = b;
        b = temp;
        return;
    }
    void Traverse()
    {
        Node *a = head;
        while (a != NULL)
        {
            cout << a->value << " ";
            a = a->next;
        }
        cout << "\n";
    };
    int getValue(int n)
    {
        Node *a = head;
        int index = 0;
        while (a != NULL)
        {
            if (index == n)
            {
                return a->value;
            }
            a = a->next;
            index++;
        }
        return -1;
    }
};
int main()
{
    LinkedList l;
    cout << l.getSize() << "\n";
    l.InsertAtHead(5);
    cout << l.getSize() << "\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout << l.getSize() << "\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);
    l.Traverse();
    cout << l.getValue(2) << "\n";

    cout << l.getValue(6) << "\n";

    // l.printReverse();
    // l.Traverse();
    l.swapFirst();
    l.Traverse();
    // l.printReverse();

    return 0;
}