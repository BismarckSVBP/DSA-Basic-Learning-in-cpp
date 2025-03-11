

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

Node *reverseAlinkedList(Node *head)
{
    Node *previous = NULL;
    Node *current = head;
    Node *next = current->next;
    while (current != NULL)
    {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    return previous;
}
Node *add(Node *&head1, Node *&head2)
{
    if(head1 ==NULL && head2 == NULL ){
        cout << "Both LL are empty." << endl;
        return NULL;
    }
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    head1 = reverseAlinkedList(head1);
    head2 = reverseAlinkedList(head2);

    Node *ansHead = NULL;
    Node *ansTail = NULL;
    int carry = 0;

    while (head1 != NULL && head2 != NULL)
    {
        int sum = carry + head1->data + head2->data;
        int digit = sum % 10;
        carry = sum / 10;

        Node *newNode = new Node(digit);
        if (ansHead == NULL)
        {
            ansHead = newNode;
            ansTail = newNode;
        }
        else
        {
            ansTail->next = newNode;
            ansTail = newNode;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    while (head1 != NULL)
    {
        int sum = carry + head1->data;
        int digit = sum % 10;
        carry = sum / 10;
        Node *newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
        head1 = head1->next;
    }
    while (head2 != NULL)
    {
        int sum = carry + head2->data;
        int digit = sum % 10;
        carry = sum / 10;
        Node *newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
        head2 = head2->next;
    }
    while (carry != 0)
    {
        int sum = carry;
        int digit = sum % 10;
        carry = sum / 10;
        Node *newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
    }

    ansHead = reverseAlinkedList(ansHead);
    return ansHead;
}

int main()
{

    Node *head1 = new Node(99);
    Node *second = new Node(1);
    Node *third = new Node(1);
    Node *fourth = new Node(1);
    // Node *fifth = new Node(1);
    // Node *sixth = new Node(2);
    // Node *seventh = new Node(1);
    // Node *eighth = new Node(1);
    // Node *ninth = new Node(0);
    // Node *tenth = new Node(1);
    // Node *eleventh = new Node(0);
    // Node *twelfth = new Node(8);
    head1->next = second;
    second->next = third;
    third->next = fourth;
    // fourth->next = fifth;
    // fifth->next = sixth;
    // sixth->next = seventh;
    // seventh->next = eighth;
    // eighth->next = ninth;
    // ninth->next = tenth;
    // tenth->next = eleventh;
    // eleventh->next = twelfth;

    Node *head2 = new Node(9);
    Node *fourteenth = new Node(5);
    Node *fifteenth = new Node(6);
    Node *sixteenth = new Node(7);
    // Node *seventeenth = new Node(8);
    // Node *eighteenth = new Node(9);
    // Node *nineteenth = new Node(1);
    // Node *twentieth = new Node(3);

    head2->next = fourteenth;
    fourteenth->next = fifteenth;
    fifteenth->next = sixteenth;
    // sixteenth->next = seventeenth;
    // seventeenth->next = eighteenth;
    // eighteenth->next = nineteenth;
    // nineteenth->next = twentieth;

    cout << "The length of LL is " << getLength(head1) << endl;

    Node *answer = add(head1, head2);
    cout << "The elements of modified LL are : ";
    print(answer);

    return 0;
}
