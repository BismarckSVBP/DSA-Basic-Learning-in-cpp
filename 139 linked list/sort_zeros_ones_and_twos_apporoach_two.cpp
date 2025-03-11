

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node()
//     {

//         this->data = 0;
//         this->next = NULL;
//     }
//     Node(int data)
//     {

//         this->data = data;
//         this->next = NULL;
//     }
// };

// int getLength(Node *&head)
// {
//     Node *temp = head;
//     int count = 0;

//     while (temp != NULL)
//     {
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }

// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";

//         temp = temp->next;
//     }
//     cout << endl;
// }

// // apporoach-2
// Node *sortElement(Node *&head, Node *&zeroKaNode, Node *&oneKaNode, Node *&twoKaNode)
// {

//     Node *current = head;
//     Node *node1 = zeroKaNode;
//     Node *node2 = oneKaNode;
//     Node *node3 = twoKaNode;
//     while (current != NULL)
//     {
//         Node *previous = NULL;
//         Node *forward = current->next;
//         if (current->data == 0)
//         {
//             node1->next = current;
//             node1 = node1->next;
//         }
//         if (current->data == 1)
//         {
//             node2->next = current;
//             node2 = node2->next;
//         }
//         if (current->data == 2)
//         {
//             node3->next = current;
//             node3 = node3->next;
//         }
//         Node *yemp = current;
//         yemp->next = NULL;

//         current = forward;
//     }
// }
// Node *join(Node *&zeroKaNode, Node *&oneKaNode, Node *&twoKaNode)
// {

//     Node *head = zeroKaNode->next;
//     Node *temp = zeroKaNode->next;
//     Node *previous = NULL;
//     if (zeroKaNode->next == NULL)
//     {
//         head = oneKaNode->next;
//     }
//     else
//     {
//         while (temp != NULL)
//         {
//             previous = temp;
//             temp = temp->next;
//         }
//         previous->next = oneKaNode->next;
//     }
//     Node *temp2 = oneKaNode->next;
//     Node *previous2 = NULL;
//     if (oneKaNode->next == NULL && zeroKaNode->next == NULL)
//     {
//         head = twoKaNode->next;
//     }
//     if (oneKaNode->next == NULL)
//     {
//         previous->next = twoKaNode->next;
//     }
//     else
//     {

//         while (temp2 != NULL)
//         {
//             previous2 = temp2;
//             temp2 = temp2->next;
//         }
//         previous2->next = twoKaNode->next;
//     }

//     return head;
// }

// int main()
// {

//     Node *head = new Node(1);
//     Node *second = new Node(1);
//     Node *third = new Node(1);
//     Node *fourth = new Node(2);
//     Node *fifth = new Node(2);
//     Node *sixth = new Node(1);
//     Node *seventh = new Node(1);
//     Node *eighth = new Node(1);
//     Node *ninth = new Node(2);
//     Node *tenth = new Node(2);
//     Node *eleventh = new Node(2);
//     Node *twelfth = new Node(2);
//     head->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth->next = sixth;
//     sixth->next = seventh;
//     seventh->next = eighth;
//     eighth->next = ninth;
//     ninth->next = tenth;
//     tenth->next = eleventh;
//     eleventh->next = twelfth;

//     cout << "The length of LL is " << getLength(head) << endl;
//     Node *previous = NULL;

//     Node *zeroKaNode = new Node(-1);
//     Node *oneKaNode = new Node(-1);
//     Node *twoKaNode = new Node(-1);

//     // counting(head, zeroKaNode, oneKaNode, twoKaNode);

//     if (head != NULL && head->next != NULL)
//     {
//         sortElement(head, zeroKaNode, oneKaNode, twoKaNode);
//         head = join(zeroKaNode, oneKaNode, twoKaNode);
//     }

//     zeroKaNode->next = NULL;
//     oneKaNode->next = NULL;
//     twoKaNode->next = NULL;
//     delete zeroKaNode, oneKaNode, twoKaNode;
//     cout << "The elements of modified LL are : ";
//     print(head);

//     return 0;
// }

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

// Function to sort the elements of the list into three separate lists (0s, 1s, 2s)
Node *sortElement(Node *&head, Node *&zeroKaNode, Node *&oneKaNode, Node *&twoKaNode)
{
    Node *current = head;     // Pointer to traverse the original list
    Node *node1 = zeroKaNode; // Pointer to the 0s list
    Node *node2 = oneKaNode;  // Pointer to the 1s list
    Node *node3 = twoKaNode;  // Pointer to the 2s list

    // Traverse the original list and place each node in the appropriate sublist
    while (current != NULL)
    {
        Node *previous = NULL;         // Temporary pointer for the current node
        Node *forward = current->next; // Pointer to the next node in the list

        // Place the node in the 0s list if its data is 0
        if (current->data == 0)
        {
            node1->next = current;
            node1 = node1->next;
        }
        // Place the node in the 1s list if its data is 1
        if (current->data == 1)
        {
            node2->next = current;
            node2 = node2->next;
        }
        // Place the node in the 2s list if its data is 2
        if (current->data == 2)
        {
            node3->next = current;
            node3 = node3->next;
        }

        // Disconnect the current node from the rest of the list
        Node *temp = current;
        temp->next = NULL;

        // Move to the next node in the original list
        current = forward;
    }
}

// Function to join the three sublists (0s, 1s, 2s) into one sorted list
Node *join(Node *&zeroKaNode, Node *&oneKaNode, Node *&twoKaNode)
{
    Node *head = zeroKaNode->next; // Start with the 0s list
    Node *temp = zeroKaNode->next; // Temporary pointer to traverse the 0s list
    Node *previous = NULL;         // Pointer to keep track of the last node in the current sublist

    // If there are no 0s, start with the 1s list
    if (zeroKaNode->next == NULL)
    {
        head = oneKaNode->next;
    }
    else
    {
        // Traverse the 0s list to find the last node
        while (temp != NULL)
        {
            previous = temp;
            temp = temp->next;
        }
        // Connect the last 0 node to the first 1 node
        previous->next = oneKaNode->next;
    }

    Node *temp2 = oneKaNode->next; // Temporary pointer to traverse the 1s list
    Node *previous2 = NULL;        // Pointer to keep track of the last node in the 1s list

    // If there are no 1s and no 0s, start with the 2s list
    if (oneKaNode->next == NULL && zeroKaNode->next == NULL)
    {
        head = twoKaNode->next;
    }

    // If there are no 1s, connect the last 0 node to the first 2 node
    if (oneKaNode->next == NULL)
    {
        previous->next = twoKaNode->next;
    }
    else
    {
        // Traverse the 1s list to find the last node
        while (temp2 != NULL)
        {
            previous2 = temp2;
            temp2 = temp2->next;
        }
        // Connect the last 1 node to the first 2 node
        previous2->next = twoKaNode->next;
    }

    return head; // Return the head of the sorted list
}

int main()
{
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

    Node *previous = NULL;

    // Create sentinel nodes for the 0s, 1s, and 2s sublists
    Node *zeroKaNode = new Node(-1);
    Node *oneKaNode = new Node(-1);
    Node *twoKaNode = new Node(-1);

    // If the list is not empty, sort and join the elements
    if (head != NULL && head->next != NULL)
    {
        sortElement(head, zeroKaNode, oneKaNode, twoKaNode);
        head = join(zeroKaNode, oneKaNode, twoKaNode);
    }

    // Clean up the sentinel nodes to prevent memory leaks
    zeroKaNode->next = NULL;
    oneKaNode->next = NULL;
    twoKaNode->next = NULL;
    delete zeroKaNode, oneKaNode, twoKaNode;

    // Print the sorted linked list
    cout << "The elements of modified LL are : ";
    print(head);

    return 0;
}
