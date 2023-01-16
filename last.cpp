#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Linked_list
{
public:
    node *head;
    // constructor
    Linked_list()
    {
        this->head = NULL;
    }
    void insert(int data)
    {
        node *newNode = new node(data);
        newNode->next = head;
        head = newNode;
    }
    int getSize()
    {
        int size = 0;
        node *a = head;
        while (a != NULL)
        {
            size++;
            a = a->next;
        }
        return size;
    }
    // Insert new value at End
    void InsertAtHead(int data)
    {
        if (head == NULL)
        {
            insert(data);
            return;
        }
        node *newNode = new node(data);
        node *current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
    void Traverse()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->next;
        }
        cout << "\n";
    }
    // searching for single value
    int getValue(int n)
    {
        node *a = head;
        int index = 0;
        while (a != NULL)
        {
            if (index == n)
            {
                return a->data;
            }
            a = a->next;
            index++;
        }
        return -1;
    }
 
    void reverse()
    {
        head = reverse(head);
    }
 
    node *reverse(node *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        node *newHead = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;
    }
    void swapTwo()
    {
        if (head == NULL || head->next == NULL)
        {
            return;
        }
        node *second = head->next;
        node *third = second->next;
        second->next = head;
        head->next = third;
        head = second;
    }
};
int main()
{
    Linked_list l;
    cout << l.getSize() << "\n";
    l.InsertAtHead(5);
    cout << l.getSize() << "\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout << l.getSize() << "\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);
    cout << l.getValue(2) << "\n";
    cout << l.getValue(6) << "\n";
    l.Traverse();
    l.reverse();
    l.Traverse();
    l.swapTwo();
    l.Traverse();
    l.reverse();
    l.Traverse();
}
