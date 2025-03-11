

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
void counting(Node *&head, int &zeroCount, int &oneCount, int &twoCount)
{

    Node *previous = NULL;
    Node *current = head;
    while (current != NULL)
    {
        if (current->data == 0)
        {
            zeroCount++;
        }
        if (current->data == 1)
        {
            oneCount++;
        }
        if (current->data == 2)
        {
            twoCount++;
        }

        Node *forward = current->next;
        previous = current;
        current = forward;
    }

    return;
}
void sortElement(Node *&head, int &zeroCount, int &oneCount, int &twoCount)
{

    Node *previous = NULL;
    Node *current = head;
    while (current != NULL)
    {
        if (zeroCount != 0)
        {
            current->data = 0;

            zeroCount--;
        }
        else
        {
            if (oneCount != 0)
            {
                current->data = 1;
                oneCount--;
            }
            else
            {
                if (twoCount != 0)
                {
                    current->data = 2;
                    twoCount--;
                }
            }
        }

        Node *forward = current->next;
        previous = current;
        current = forward;
    }
    return;
}
int main()
{

    Node *head = new Node(1);
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

    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
    counting(head, zeroCount, oneCount, twoCount);
    sortElement(head, zeroCount, oneCount, twoCount);
    cout << "The elements of modified LL are : ";
    print(head);

    return 0;
}
