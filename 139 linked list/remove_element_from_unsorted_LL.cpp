

#include <iostream>
using namespace std;
#include <unordered_map>

unordered_map<int, bool> check;
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
void removeDuplicateElement(Node *&head)
{
    Node *previous = head;
    Node *current = head->next;
    while (current != NULL)
    {
        Node *forward = current->next;
        check[previous->data] = 1;
        if (check[current->data] == 1)
        {
            current->next = NULL;
            delete current;
            previous->next = forward;
            current = forward;
        }
        else
        {
            previous = current;
            current = forward;
        }
    }
    return;
}

int main()
{

    Node *head = new Node(1);
    Node *second = new Node(1);
    Node *third = new Node(2);
    Node *fourth = new Node(2);
    Node *fifth = new Node(2);
    Node *sixth = new Node(2);
    Node *seventh = new Node(1);
    Node *eighth = new Node(1);
    Node *ninth = new Node(5);
    Node *tenth = new Node(1);
    Node *eleventh = new Node(6);
    Node *twelfth = new Node(1);
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

    cout << "The length of LL is " << getLength(head) << endl;
    Node *previous = NULL;
    int k = 3;
    int p = 0;
    removeDuplicateElement(head);
    cout << "The elements of modified LL are : ";
    print(head);

    return 0;
}
