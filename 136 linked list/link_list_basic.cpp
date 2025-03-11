

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     // node constructor initally storing data or pointer
//     Node()
//     {
//         this->data = 0;
//         this->next = NULL;
//     }

//     //node constructor on calling the Node
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// //for printing the LL
// void print(Node *&head)
// {
//     //intialising a new Node

//     Node *temp = head;
//     while (temp != NULL)//jab tak last wala joki NULL ke pointer ke barabar nahi ho jata tak data print karege
//     {
//         //printing the current LL data
//         cout << temp->data << " ";
//         // shifting the pointer node on next LL next node
//         temp = temp->next;
//     }
// }
// int main()
// {
//     //Decleration and Intialisaing the Node
//     Node *first = new Node(10);
//     Node *second = new Node(20);
//     Node *third = new Node(30);
//     Node *fourth = new Node(40);
//     Node *fifth = new Node(50);

//     //linking 1st node to 2nd Node
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;

//     //calling the print function
//     print(second);
//     return 0;
// }

#include <iostream>
using namespace std;

// creating a node data-type which contains a integer data and a node pointer which will point next node
class Node{
public:
    int data;
    Node *next;

    // node constructor initally storing data or pointer
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    // node constructor on calling the Node
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtNode(int data, Node *&head, Node *&tail)
{

    // step-0: Check for empty linked list

    if (head == NULL)
    {
        // LL -> empty list , first node ab add hogi
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // step-1: Create a new Node
    Node *newNode = new Node();

    // step-2: Insert the data in newNode
    newNode->data = data;

    // combine of step-1 & step-2
    // Node *newNode = new Node(data);

    // step-3: Intiallise the new Node pointer with the head pointer
    newNode->next = head;

    // step-4: Move head now on the starting position
    head = newNode;
}

// inserting the tail node
void insertTail(int data, Node *&head, Node *&tail)
{
    // step-0: Check for empty linked list

    if (head == NULL)
    {
        // LL -> empty list , first node ab add hogi
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // step-1: Create a new Node
    Node *newNode = new Node(data);
    // step-2: Connect newNode with the tail node
    if (tail == NULL)
    {
        // first node ab add hone wali hai
        tail = newNode;
        head = newNode;
    }
    else
    { // LL is non-empty
        tail->next = newNode;
    }
    // step-3:update tail
    tail = newNode;
}

// for printing the LL
void print(Node *head)
{
    // intialising a new Node

    Node *temp = head;
    while (temp != NULL) // jab tak last wala jo ki NULL ke pointer ke barabar nahi ho jata tak data print karege
    {
        // printing the current LL data
        cout << temp->data << " ";
        // shifting the pointer node on next LL next node
        temp = temp->next;
    }
}

int main()
{
    // Decleration and Intialisaing the Node
    Node *head = NULL;
    Node *tail = NULL;
    insertAtNode(20, head, tail);
    insertAtNode(30, head, tail);
    insertAtNode(40, head, tail);
    insertAtNode(50, head, tail);
    insertAtNode(60, head, tail);

    insertTail(10, head, tail);
    insertTail(9, head, tail);
    insertTail(8, head, tail);
    insertTail(7, head, tail);
    insertTail(6, head, tail);
    insertAtNode(780, head, tail);

    // calling the print function
    print(head);

    return 0;
}
