

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {

        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {

        this->data = data;
        this->next = NULL;
    }
};

int getLength(Node *&head)
{
    Node *temp = head;
    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
Node *reverseAlinkedList(Node *&current, Node *&previous)
{
    if (current == NULL)
    {

        return previous;
    }
    Node *forward = current->next;

    current->next = previous;

    previous = current;

    current = forward;

    return reverseAlinkedList(current, previous);
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";

        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node *first = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    Node *fifth = new Node(5);
    Node *sixth = new Node(6);
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    cout << "The length of LL is " << getLength(first) << endl;

    cout << "The elements of LL are : ";
    print(first);

    Node *previous = NULL;

    // // reverse a LL through recursion
    reverseAlinkedList(first, previous);

    // // reverse a LL through loop

    // Node *&current = first;
    // while (current != NULL)
    // {
    //     Node *forward = current->next;
    //     current->next = previous;

    //     previous = current;

    //     current = forward;
    // }

    cout << "The elements of modified LL are : ";

    print(previous);

    return 0;
}