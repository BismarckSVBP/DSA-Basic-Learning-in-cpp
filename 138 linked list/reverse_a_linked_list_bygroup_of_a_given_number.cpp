
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

Node *reverseKNodes(Node *&head, int &k)
{
    if (head == NULL)
    {
        cout << "LL is empty." << endl;
        return head;
    }
    int length = getLength(head);
    if (k > length)
    {
        cout << "Enter valid value for k " << endl;
        return head;
    }
    // it means number of nodes in LL is greater or equal to k

    // step-1: reverse first k nodes of LL
    Node *previous = NULL;
    Node *current = head;
    Node *forward = new Node();
    int count = 0;
    while (count < k)
    {
        forward = current->next;
        current->next = previous;
        previous = current;
        current = forward;
        count++;
    }
    // step-2: recursive call
    if (forward != NULL)
    {
        // we still have nodes left to reverse
        head->next = reverseKNodes(forward, k);
    }
    // step-3:return head of the modified LL
    return previous;
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

    cout << "The length of LL is " << getLength(head) << endl;
    Node *previous = NULL;
    int k = 3;
    int p = 0;

    head = reverseKNodes(head, k);
    cout << "The elements of LL are : ";
    print(head);

    return 0;
}
