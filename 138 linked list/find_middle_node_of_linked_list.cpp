
// //time complexity = O(n)

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
// void findmiddleNode(Node *&head)
// {
//     Node *temp = head;
//     int count = 1;
//     int length = getLength(head);
//     int midPosition = 0;
//     if (length & 1 == 1)
//     {
//         midPosition = (length / 2) + 1;
//     }
//     else
//     {
//         midPosition = (length / 2);
//     }

//     while (count < midPosition)
//     {
//         count++;
//         temp = temp->next;
//     }
//     if (length & 1 == 1)
//     {
//         cout << "The middle elements is :" << temp->data << endl;
//     }
//     else
//     {
//         cout << "The middle elements are " << temp->data << " & " << temp->next->data << endl;
//     }

//     return;
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

// int main()
// {

//     Node *first = new Node(1);
//     Node *second = new Node(2);
//     Node *third = new Node(3);
//     Node *fourth = new Node(4);
//     Node *fifth = new Node(5);
//     Node*sixth = new Node(6);
//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;
//     fifth->next = sixth;

//     cout << "The length of LL is " << getLength(first) << endl;

//     findmiddleNode(first);
//     cout << "The elements of LL are : ";
//     print(first);

//     return 0;
// }

// time complexity O(n) best apporoach

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

Node *findmiddleNodethroughTwoPointer(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL is empty." << endl;
        return head;
    }
    if (head->next == NULL)
    {

        return head;
    }

    Node *slow = head;
    // Node *fast = head//if we want ((length/2)+1)th term as middle node
    Node *fast = head->next; // if we want (length/2)th term as middle node

    while (fast != NULL && slow->next != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }

    cout << "The middle elements are " << slow->data << "." << endl;
    return slow;
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

    findmiddleNodethroughTwoPointer(first);
    cout << "The elements of LL are : ";
    print(first);

    return 0;
}