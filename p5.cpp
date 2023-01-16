Raju Ahmed
#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node* next;
    node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
class Linked_list
{
private:
    int size;

public:
    node* head;
    //constructor
    Linked_list()
    {
        this->head = nullptr;
        this->size = 0;
    }

    void insert(int data) {
            node* newNode = new node(data);
            newNode->next = head;
            head = newNode;
            size++;
        }
    int getSize()
    {
        return size;
    }
    // Insert new value at End
    void Insert_At_End(int data)
    {
        if (head == nullptr)
        {
            insert(data);
            return;
        }
        node* newNode = new node(data);
        node* current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = newNode;
    }
    void Traverse()
    {
        node* a=head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<"\n";
    }
    //searching for single value
    int Search_Distinct_Value(int value)
    {
        node* a=head;
        int index=0;
        while(a!=NULL)
        {
            if(a->data==value)
            {
                return index;
            }
            a=a->next;
            index++;
        }
        return -1;
    }

    void reverse()
    {
        head = reverse(head);
    }

    node* reverse(node* head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }
        node* newHead = reverse(head->next);
        head->next->next = head;
        head->next = nullptr;
        return newHead;
    }
    void swap_First_Two()
    {
        if (head == nullptr || head->next == nullptr)
        {
            return;
        }
        node* second = head->next;
        node* third = second->next;
        second->next = head;
        head->next = third;
        head = second;
    }

};
int main()
{
    Linked_list l;
    cout<<l.getSize()<<"\n";
    l.Insert_At_End(5);
    cout<<l.getSize()<<"\n";
    l.Insert_At_End(6);
    cout<<l.getSize()<<"\n";
    l.Insert_At_End(30);
    cout<<l.getSize()<<"\n";
    l.Insert_At_End(20);
    l.Insert_At_End(30);
    cout<<l.Search_Distinct_Value(2)<<"\n";
    cout<<l.Search_Distinct_Value(6)<<"\n";
    l.Traverse();
    l.reverse();
    l.Traverse();
    l.swap_First_Two();
    l.Traverse();
    l.reverse();
    l.Traverse();

}