#include <iostream>
using namespace std;

// Class representing a node in the linked list
class Node
{
public:
    int data;   // Data stored in the node
    Node *next; // Pointer to the next node in the linked list

    // Default constructor
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    // Parameterized constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// Function to insert a node at the head of the linked list
void insertAtHead(int data, Node *&head, Node *&tail)
{
    // If the list is empty, create a new node and set it as both head and tail
    if (head == NULL)
    {
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

    // Point the new node's next to the current head
    newNode->next = head;

    // Update the head to be the new node
    head = newNode;
}

// Function to insert a node at the tail of the linked list
void insertAtTail(int data, Node *&head, Node *&tail)
{
    // If the list is empty, create a new node and set it as both head and tail
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // Create a new node
    Node *newNode = new Node(data);

    // Update the tail's next to point to the new node
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

    // Update the tail to be the new node
    tail = newNode;
}

// Function to get the length of the linked list
int lengthOfLinkedList(Node *head)
{
    int length = 0;
    Node *temp = head;

    // Traverse the list and count the nodes
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }

    return length;
}

// Function to insert a node at a specific position in the linked list
void insertAtPosition(int position, int data, Node *&head, Node *&tail)
{
    //..IT IS NOT NECESSORY TO WRITE BELOW COMMENTED IF CASE
    //     // If the list is empty, create a new node and set it as both head and tail
    // if (head == NULL)
    // {
    //     Node *newNode = new Node(data);
    //     head = newNode;
    //     tail = newNode;
    //     return;
    // }
    // If position is less than or equal to 1, insert at head
    if (position <= 1)
    {
        insertAtHead(data, head, tail);
        return;
    }

    // Get the length of the linked list
    int length = lengthOfLinkedList(head);

    // If position is greater than or equal to the length, insert at tail
    if (position > length)
    {
        insertAtTail(data, head, tail);
        return;
    }

    // Traverse to the node just before the specified position
    int i = 2;
    Node *previous = head;

    while (i < position)
    {
        previous = previous->next;
        i++;
    }

    // Adjust pointers to insert the new node at the specified position

    Node *current = previous->next;

    // Create a new node
    Node *newNode = new Node(data);

    newNode->next = current;

    previous->next = newNode;
}

// Function to print the linked list
void printList(Node *head)
{
    Node *temp = head;

    // Traverse the list and print each node's data
    while (temp != NULL)
    {
        // printing the current LL data

        cout << temp->data << " ";
        // shifting the pointer node on next LL next node

        temp = temp->next;
    }

    cout << endl;
}

// Main function to test the linked list operations
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    // Insert nodes at the head
    // insertAtHead(20, head, tail);
    // insertAtHead(30, head, tail);
    // insertAtHead(40, head, tail);
    // insertAtHead(50, head, tail);
    // insertAtHead(60, head, tail);

    // // Insert nodes at the tail
    // insertAtTail(10, head, tail);
    // insertAtTail(9, head, tail);
    // insertAtTail(8, head, tail);
    // insertAtTail(7, head, tail);
    // insertAtTail(6, head, tail);

    // // Insert a node at the head
    // insertAtHead(780, head, tail);

    // Insert a node at position 3
    insertAtPosition(3, -9, head, tail);

    // Print the linked list
    printList(head);

    return 0;
}
