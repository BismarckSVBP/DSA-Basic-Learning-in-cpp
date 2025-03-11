

#include <iostream>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;

    Node()
    {
        this->prev = NULL;
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {

        this->data = data;
        this->next = NULL;
        this->prev = NULL;
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

void insertAtHead(Node *&head, Node *&tail, int data)
{
    // LL is empty
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // LL is not empty

    // step: create a node
    Node *newNode = new Node(data);
    // step-2:
    newNode->next = head;
    // step-3:
    head->prev = newNode;
    // step-4:
    head = newNode;
}
// we call this function when head pointer is intialise and tail pointer at NULL
void positioningTail(Node *&head, Node *&tail)
{
    Node *temp = head;

    while (temp != NULL)
    {
        tail = temp;
        temp = temp->next;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    // LL is empty
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    if (tail == NULL)
    {
        positioningTail(head, tail);
    }
    // LL is not empty

    // step-1: create a node
    Node *newNode = new Node(data);
    // step-2:
    tail->next = newNode;
    // step-3:
    newNode->prev = tail;
    // step-4:
    tail = newNode;
}

void insertAtPosition(Node *&head, Node *&tail, int data, int Position)
{

    // LL is empty
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    if (Position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }
    int length = getLength(head);
    if (Position > length)
    {
        insertAtTail(head, tail, data);
    
        return;
    }
    int count = 2;
    Node *previous = head;

    while (count < Position)
    {
        count++;
        previous = previous->next;
    }
    Node *current = previous->next;

    Node *insertCurrent = new Node(data);

    previous->next = insertCurrent;

    insertCurrent->prev = previous;

    current->prev = insertCurrent;

    insertCurrent->next = current;

    // newCurrent->prev = previous;
    // previous->next = newCurrent;
    // current->next = NULL;
    // current->prev = NULL;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";

        temp = temp->next;
    }
}

int main()
{

    // Node *first = new Node(1);
    // Node *second = new Node(2);
    // Node *third = new Node(3);

    // first->next = second;
    // second->prev = first;
    // second->next = third;
    // third->prev = second;
    // cout << getLength(first) << endl;
    // print(first);

    Node *head = new Node(55);
    Node *tail = NULL;

    // inserting data
    insertAtHead(head, tail, 60);
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 30);

    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 81);
    insertAtTail(head, tail, 82);
    insertAtTail(head, tail, 83);

    insertAtPosition(head, tail, 99, 10);

    cout << getLength(head) << endl;
    print(head);

    return 0;
}