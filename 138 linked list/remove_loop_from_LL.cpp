

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
unordered_map<Node *, bool> check2;
unordered_map<Node *, bool> check3;
unordered_map<Node *, bool> check4;
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

// Node *findStartingPositionAndRemoveTheLoop(Node *&head)
// {

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

//             break;
//         }
//     }

//     slow = head;
//     Node *temp = new Node();
//     while (slow != fast)
//     {
//         temp = fast;
//         fast = fast->next;
//         slow = slow->next;
//     }
//     temp->next = NULL;
//     return slow;
// }

// // Aproach -2
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
bool checkCircular2(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return false;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        if (check4[temp] == true)
        {
            return true;
        }
        check4[temp] = true;
        temp = temp->next;
    }
    return false;
}
Node *findStartingPositionAndRemoveTheLoop(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        if (check2[temp] == true)
        {
            return temp;
        }
        check2[temp] = true;
        temp = temp->next;
    }
}
void RemoveTheLoop(Node *&head)
{
    Node *temp = head;
    Node *temp2 = NULL;
    while (temp != NULL)
    {
        if (check3[temp] == true)
        {
            break;
        }
        temp2 = temp;
        check3[temp] = true;
        temp = temp->next;
    }
    temp2->next = NULL;
}
int main()
{

    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    Node *fifth = new Node(5);
    Node *sixth = new Node(6);
    Node *seventh = new Node(7);
    Node *eigth = new Node(8);
    Node *nineth = new Node(9);
    Node *tenth = new Node(10);
    Node *eleventh = new Node(11);
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
    eleventh->next = sixth;

    // cout << "The length of LL is " << getLength(head) << endl;

    bool checking = checkCircular(head);
    if (checking == 1)
    {
        Node *findPositionOfStartingLoop = findStartingPositionAndRemoveTheLoop(head);
        cout << "Loops exists and loop started from " << findPositionOfStartingLoop->data << endl;
        RemoveTheLoop(head);
    }
    else
    {
        cout << "Loops does not exists." << endl;
    }

    bool checking2 = checkCircular2(head);
    if (checking2 == 1)
    {
        Node *findPositionOfStartingLoop = findStartingPositionAndRemoveTheLoop(head);
        cout << "Loops exists and loop started from " << findPositionOfStartingLoop->data << endl;
    }
    else
    {
        cout << "Loops does not exists." << endl;
    }
    cout << "The elements of LL are : ";
    print(head);
    return 0;
}