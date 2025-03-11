

#include <iostream>
using namespace std;

// Node class to represent each node in the linked list
class Node
{
public:
    int data;   // Data stored in the node
    Node *next; // Pointer to the next node in the list

    // Default constructor initializing data to 0 and next to NULL
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    // Parameterized constructor to initialize node with a specific data value
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// Function to get the length of the linked list
int getLength(Node *&head)
{
    Node *temp = head; // Temporary pointer to traverse the list
    int count = 0;     // Counter to keep track of the number of nodes

    // Traverse the list until the end (NULL)
    while (temp != NULL)
    {
        count++;           // Increment the counter for each node
        temp = temp->next; // Move to the next node
    }
    return count; // Return the total number of nodes
}

// Function to print the elements of the linked list
void print(Node *&head)
{
    Node *temp = head; // Temporary pointer to traverse the list

    // Traverse the list and print each node's data
    while (temp != NULL)
    {
        cout << temp->data << " "; // Print the data of the current node
        temp = temp->next;         // Move to the next node
    }
    cout << endl; // Print a newline after the entire list is printed
}
Node *sortElement(Node *&head)
{
    Node *zeroKaNode = new Node(-1);
    Node *zeroKaTail = zeroKaNode;
    Node *oneKaNode = new Node(-1);
    Node *oneKaTail = oneKaNode;

    Node *twoKaNode = new Node(-1);
    Node *twoKaTail = twoKaNode;
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == 0)
        {
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;
            zeroKaTail->next = temp;
            zeroKaTail = temp;
        }
        else if (curr->data == 1)
        {
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;
            oneKaTail->next = temp;
            oneKaTail = temp;
        }
        else if (curr->data == 2)
        {
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;
            twoKaTail->next = temp;
            twoKaTail = temp;
        }
    }
    Node *temp = oneKaNode;
    oneKaNode = oneKaNode->next;
    temp->next = NULL;
    delete temp;

    temp = twoKaNode;
    twoKaNode = twoKaNode->next;
    temp->next = NULL;
    delete temp;

    if (oneKaNode != NULL)
    {
        zeroKaTail->next = oneKaNode;
        if (twoKaNode != NULL)
        {
            oneKaTail->next = twoKaNode;
        }
        else
        {
            if (twoKaNode != NULL)
            {
                oneKaTail->next = twoKaNode;
            }
        }
    }
    else
    {
        if (twoKaNode != NULL)
        {
            zeroKaTail->next = twoKaNode;
        }
    }

    temp = zeroKaNode;
    zeroKaNode = zeroKaNode->next;
    temp->next = NULL;
    delete temp;

    return zeroKaNode;
}

int main()
{
    // Creating a linked list with 1s and 2s
    Node *head = new Node(2);
    Node *second = new Node(2);
    Node *third = new Node(1);
    Node *fourth = new Node(2);
    Node *fifth = new Node(1);
    Node *sixth = new Node(2);
    Node *seventh = new Node(1);
    Node *eighth = new Node(1);
    Node *ninth = new Node(2);
    Node *tenth = new Node(2);
    Node *eleventh = new Node(2);
    Node *twelfth = new Node(2);

    // Linking the nodes to form the initial list
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;
    eighth->next = ninth;
    ninth->next = tenth;
    tenth->next = eleventh;
    eleventh->next = twelfth;

    // Print the length of the linked list
    cout << "The length of LL is " << getLength(head) << endl;

    // If the list is not empty, sort an d join the elements
    if (head != NULL && head->next != NULL)
    {
        sortElement(head);
    }

    // Print the sorted linked list
    cout << "The elements of modified LL are : ";
    print(head);

    return 0;
}
