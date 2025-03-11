

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
int getlength(Node *&head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count = count + 1;
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
}
Node *reverse(Node *&head)
{
    Node *previous = NULL;
    Node *current = head;
    Node *forward = new Node();
    int count = 0;
    while (current != NULL)
    {
        forward = current->next;
        current->next = previous;
        previous = current;
        current = forward;
        count = count + 1;
    }
    return previous;
}
Node *reverseKNodes(Node *&head, int &k)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return head;
    }
    int length = getlength(head);

    if (length < k)
    {
        cout << "Enter valid value for k " << endl;
        return reverse(head);
    }
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
    if (forward != NULL)
    {
        head->next = reverseKNodes(forward, k);
    }
    return previous;
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
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;

    cout << "The length of LL is " << getlength(head) << endl;
    Node *previous = NULL;
    int k = 9;
    head = reverseKNodes(head, k);
    cout << "The elements of LL are : ";
    print(head);
    return 0;
}