

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
Node *join(Node *&head1, Node *&head2)
{
    if (head1 == NULL && head2 == NULL)
    {
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
    Node *ansLL = NULL;
    Node *ans = NULL;

    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data > head2->data)
        {
            if (ansLL == NULL)
            {
                ans = head2;
                ansLL = head2;
                head2 = head2->next;
            }
            else
            {
                ansLL->next = head2;
                ansLL = ansLL->next;
                head2 = head2->next;
            }
        }
        else
        {
            if (ansLL == NULL)
            {
                ans = head1;
                ansLL = head1;
                head1 = head1->next;
            }
            else
            {
                ansLL->next = head1;
                ansLL = ansLL->next;
                head1 = head1->next;
            }
        }
    }
    while (head1 != NULL)
    {

        if (ansLL == NULL)
        {
            ans = head1;
            ansLL = head1;
            head1 = head1->next;
        }
        else
        {
            ansLL->next = head1;
            ansLL = ansLL->next;
            head1 = head1->next;
        }
    }
    while (head2 != NULL)
    {

        if (ansLL == NULL)
        {
            ans = head2;
            ansLL = head2;
            head2 = head2->next;
        }
        else
        {
            ansLL->next = head2;
            ansLL = ansLL->next;
            head2 = head2->next;
        }
    }
    return ans;
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
    Node *eighth = new Node(9);
    Node *ninth = new Node(12);
    Node *tenth = new Node(23);
    Node *eleventh = new Node(24);
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

    Node *head2 = new Node(8);
    Node *fourteenth = new Node(9);
    Node *fifteenth = new Node(10);
    Node *sixteenth = new Node(11);
    Node *seventeenth = new Node(12);
    Node *eighteenth = new Node(18);
    Node *nineteenth = new Node(19);
    Node *twentieth = new Node(30);

    head2->next = fourteenth;
    fourteenth->next = fifteenth;
    fifteenth->next = sixteenth;
    sixteenth->next = seventeenth;
    seventeenth->next = eighteenth;
    eighteenth->next = nineteenth;
    nineteenth->next = twentieth;

    cout << "The length of LL is " << getLength(head) << endl;
    Node *answer = join(head, head2);

    print(answer);

    return 0;
}

// Leetcode solution

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution
// {
// public:
//     ListNode *join(ListNode *&head1, ListNode *&list2)
//     {
//         if (head1 == NULL && list2 == NULL)
//         {
//             return NULL;
//         }
//         if (head1 == NULL)
//         {
//             return list2;
//         }
//         if (list2 == NULL)
//         {
//             return head1;
//         }
//         ListNode *ansLL = NULL;
//         ListNode *ans = NULL;

//         while (head1 != NULL && list2 != NULL)
//         {
//             if (head1->val > list2->val)
//             {
//                 if (ansLL == NULL)
//                 {
//                     ans = list2;
//                     ansLL = list2;
//                     list2 = list2->next;
//                 }
//                 else
//                 {
//                     ansLL->next = list2;
//                     ansLL = ansLL->next;
//                     list2 = list2->next;
//                 }
//             }
//             else
//             {
//                 if (ansLL == NULL)
//                 {
//                     ans = head1;
//                     ansLL = head1;
//                     head1 = head1->next;
//                 }
//                 else
//                 {
//                     ansLL->next = head1;
//                     ansLL = ansLL->next;
//                     head1 = head1->next;
//                 }
//             }
//         }
//         while (head1 != NULL)
//         {

//             if (ansLL == NULL)
//             {
//                 ans = head1;
//                 ansLL = head1;
//                 head1 = head1->next;
//             }
//             else
//             {
//                 ansLL->next = head1;
//                 ansLL = ansLL->next;
//                 head1 = head1->next;
//             }
//         }
//         while (list2 != NULL)
//         {

//             if (ansLL == NULL)
//             {
//                 ans = list2;
//                 ansLL = list2;
//                 list2 = list2->next;
//             }
//             else
//             {
//                 ansLL->next = list2;
//                 ansLL = ansLL->next;
//                 list2 = list2->next;
//             }
//         }
//         return ans;
//     }
//     ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
//     {
//         ListNode *answer = join(list1, list2);
//            return answer;
//     }
// };