
// do not try to find length and print because it will become infinte loop
#include <iostream>
#include <unordered_map>
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

unordered_map<Node *, bool> check;
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

// //Aproach -1
// bool checkCircular(Node *&head)
// {
//     if (head == NULL)
//     {
//         cout << "LL is empty" << endl;
//         return false;
//     }
//     Node *fast = head;
//     Node *slow = head;

//     while (fast != NULL)
//     {
//         fast = fast->next;
//         if (fast != NULL)
//         {
//             fast = fast->next;
//             slow = slow->next;
//         }
//         if (slow == fast)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// Aproach -2
bool checkCircular(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return false;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        if (check[temp] == true)
        {
            return true;
        }
        check[temp] = true;
        temp = temp->next;
    }
    return false;
}
int main()
{

    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    Node *fifth = new Node(5);
    Node *sixth = new Node(6);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = head;

    // cout << "The length of LL is " << getLength(head) << endl;

    bool checking = checkCircular(head);
    if (checking == 1)
    {
        cout << "LL is circular." << endl;
    }
    else
    {
        cout << "LL is NOT circular." << endl;
    }
    // cout << "The elements of LL are : ";
    // print(head);
    return 0;
}