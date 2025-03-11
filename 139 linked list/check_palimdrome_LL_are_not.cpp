

// //by me
// #include <iostream>
// #include <unordered_map>
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

// unordered_map<Node *, bool> check;
// unordered_map<Node *, bool> check2;
// unordered_map<Node *, bool> check3;
// unordered_map<Node *, bool> check4;
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
// bool checkPalimdrome(Node *head, int midpoint)
// {
//     if (head == NULL)
//     {
//         cout << "LL is empty." << endl;
//         return true;
//     }
//     if (head->next == NULL)
//     {
//         return true;
//     }
//     int count = 0;
//     Node *temp = head;

//     while (count < midpoint)
//     {
//         count++;
//         temp = temp->next;
//     }

//     Node *secondPresent = temp;

//     Node *previous = NULL;

//     Node *current = temp->next;

//     while (current != NULL)
//     {
//         Node *forward = current->next;

//         current->next = previous;
//         previous = current;
//         current = forward;
//     }

//     secondPresent->next = previous;

//     Node *firstPresent = head;

//     secondPresent = secondPresent->next;

//     int num = 1;

//     while (num < midpoint)
//     {
//         if (firstPresent->data != secondPresent->data)
//         {
//             cout << firstPresent->data << endl;
//             return false;
//         }
//         firstPresent = firstPresent->next;

//         secondPresent = secondPresent->next;

//         num++;
//     }
//     return true;
// }

// int main()
// {

//     Node *head = new Node(1);
//     Node *second = new Node(2);
//     Node *third = new Node(3);
//     Node *fourth = new Node(4);
//     Node *fifth = new Node(5);
//     Node *sixth = new Node(6);
//     Node *seventh = new Node(5);
//     Node *eigth = new Node(4);
//     Node *nineth = new Node(3);
//     Node *tenth = new Node(2);
//     Node *eleventh = new Node(1);
//     head->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth->next = sixth;
//     sixth->next = seventh;
//     seventh->next = eigth;
//     eigth->next = nineth;
//     nineth->next = tenth;
//     tenth->next = eleventh;
//     eleventh->next = NULL;

//     cout << "The length of LL is " << getLength(head) << endl;

//     int midPoint = 0;

//     int length = getLength(head);

//     if (length & 1 == 1)
//     {
//         midPoint = length / 2;
//     }
//     else
//     {
//         midPoint = (length / 2) - 1;
//     }

//     bool isPalindrome = checkPalimdrome(head, midPoint);

//     if (isPalindrome)
//     {
//         cout << "LL is a valid palindrome" << endl;
//     }
//     else
//     {
//         cout << "LL is not a valid palindrome" << endl;
//     }

//     cout << "The elements of LL are : ";

//     print(head);

//     return 0;
// }

// by master
#include <iostream>
#include <unordered_map>
using namespace std;

// Node class definition
class Node
{
public:
    int data;
    Node *next;

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

// Function to get the length of the linked list
int getLength(Node *&head)
{
    Node *temp = head;
    int count = 0;

    // Traverse the linked list and count the nodes
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

// Function to print the linked list
void print(Node *&head)
{
    Node *temp = head;

    // Traverse the linked list and print each node's data
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to reverse the linked list
Node *reverse(Node *head)
{
    Node *previous = NULL;
    Node *current = head;

    // Reverse the links between nodes
    while (current != NULL)
    {
        Node *forward = current->next;
        current->next = previous;
        previous = current;
        current = forward;
    }
    return previous;
}

// Function to check if the linked list is a palindrome
bool checkPalindrome(Node *head)
{
    if (head == NULL)
    {
        cout << "LL is empty." << endl;
        return true;
    }
    if (head->next == NULL)
    {
        return true;
    }

    // Find the middle of the linked list
    Node *slow = head;
    Node *fast = head->next;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }

    // Reverse the second half of the linked list
    Node *reverseLLKaHead = reverse(slow->next);
    slow->next = reverseLLKaHead;

    // Compare the first half and the reversed second half
    Node *temp1 = head;
    Node *temp2 = reverseLLKaHead;
    while (temp2 != NULL)
    {
        if (temp1->data != temp2->data)
        {
            return false;
        }
        else
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    return true;
}

// Main function
int main()
{
    // Creating nodes and linking them
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    Node *fifth = new Node(5);
    Node *sixth = new Node(6);
    Node *seventh = new Node(4);
    Node *eigth = new Node(4);
    Node *nineth = new Node(3);
    Node *tenth = new Node(2);
    Node *eleventh = new Node(1);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eigth;
    eigth->next = nineth;
    nineth->next = tenth;
    tenth->next = eleventh;
    eleventh->next = NULL;

    // Print the linked list
    cout << "The elements of LL are : ";
    print(head);

    // Get and print the length of the linked list
    cout << "The length of LL is " << getLength(head) << endl;

    // Check if the linked list is a palindrome and print the result
    bool isPalindrome = checkPalindrome(head);
    if (isPalindrome)
    {
        cout << "LL is a valid palindrome" << endl;
    }
    else
    {
        cout << "LL is not a valid palindrome" << endl;
    }

    // Print the linked list again to show its state after palindrome check
    cout << "The elements of LL are : ";
    print(head);

    return 0;
}
