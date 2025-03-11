

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
Node *convertNumberIntoLL(Node *&sum, long long int c)
{
    Node *newNode2 = sum;
    while (c != 0)
    {
        Node *newNode = new Node();
        int num = c % 10;
        newNode2->data = num;
        newNode2->next = newNode;
        newNode2 = newNode;
        c = c / 10;
    }
    return sum;
}
string add(Node *&head)
{
    string num = "";
    Node *previous = NULL;
    Node *current = head;
    while (current != NULL)
    {

        Node *forward = current->next;
        previous = current;
        current = forward;
        cout << previous->data << endl;
        num = num + to_string(previous->data);
    }
    return num;
}
Node *reverseAlinkedList(Node *&current, Node *&previous)
{
    if (current == NULL)
    {

        return previous;
    }
    Node *forward = current->next;

    current->next = previous;

    previous = current;

    current = forward;

    return reverseAlinkedList(current, previous);
}

// long long int add(Node *&head)
// {
//     long long int num = 0;
//     Node *previous = NULL;
//     Node *current = head;
//     while (current != NULL)
//     {

//         Node *forward = current->next;
//         previous = current;
//         current = forward;
//         cout << previous->data << endl;
//         num = (num * 10);

//         num = num + (previous->data);
//         }
//     return num;
// }
int main()
{

    Node *head = new Node(9);
    Node *second = new Node(1);
    Node *third = new Node(2);
    Node *fourth = new Node(0);
    Node *fifth = new Node(0);
    Node *sixth = new Node(2);
    Node *seventh = new Node(1);
    Node *eighth = new Node(1);
    Node *ninth = new Node(0);
    Node *tenth = new Node(1);
    Node *eleventh = new Node(0);
    // Node *twelfth = new Node(8);
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
   // eleventh->next = twelfth;

    Node *head2 = new Node(4);
    Node *fourteenth = new Node(5);
    Node *fifteenth = new Node(6);
    Node *sixteenth = new Node(7);
    Node *seventeenth = new Node(8);
    Node *eighteenth = new Node(9);
    Node *nineteenth = new Node(1);
    Node *twentieth = new Node(3);

    head2->next = fourteenth;
    fourteenth->next = fifteenth;
    fifteenth->next = sixteenth;
    sixteenth->next = seventeenth;
    seventeenth->next = eighteenth;
    eighteenth->next = nineteenth;
    nineteenth->next = twentieth;

    cout << "The length of LL is " << getLength(head) << endl;

    int k = 3;
    int p = 0;

    // when we return a long long integer value
    //  cout << add(head) << endl;

    // when we return a string value stoll converts a large string value in a number
    long long int a = stoll(add(head));
    long long int b = stoll(add(head2));
    long long int c = a + b;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    Node *sum = new Node();
    Node *sum2 = convertNumberIntoLL(sum, c);
    Node *previous = NULL;
    Node *resultLL = reverseAlinkedList(sum2, previous);
    resultLL = resultLL->next;

    cout << "The elements of modified LL are : ";
    print(resultLL);

    return 0;
}
