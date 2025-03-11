/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *reverseAlinkedList(ListNode *head)
    {
        ListNode *previous = NULL;
        ListNode *current = head;
        ListNode *next = current->next;
        while (current != NULL)
        {
            next = current->next;
            current->next = previous;
            previous = current;
            current = next;
        }
        return previous;
    }
    ListNode *add(ListNode *&l1, ListNode *&l2)
    {
        if (l1 == NULL && l2 == NULL)
        {
            cout << "Both LL are empty." << endl;
            return NULL;
        }
        if (l1 == NULL)
        {
            return l2;
        }
        if (l2 == NULL)
        {
            return l1;
        }
        

        ListNode *ansHead = NULL;
        ListNode *ansTail = NULL;
        int carry = 0;

        while (l1 != NULL && l2 != NULL)
        {
            int sum = carry + l1->val + l2->val;
            int digit = sum % 10;
            carry = sum / 10;

            ListNode *newNode = new ListNode(digit);
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
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1 != NULL)
        {
            int sum = carry + l1->val;
            int digit = sum % 10;
            carry = sum / 10;
            ListNode *newNode = new ListNode(digit);
            ansTail->next = newNode;
            ansTail = newNode;
            l1 = l1->next;
        }
        while (l2 != NULL)
        {
            int sum = carry + l2->val;
            int digit = sum % 10;
            carry = sum / 10;
            ListNode *newNode = new ListNode(digit);
            ansTail->next = newNode;
            ansTail = newNode;
            l2 = l2->next;
        }
        while (carry != 0)
        {
            int sum = carry;
            int digit = sum % 10;
            carry = sum / 10;
            ListNode *newNode = new ListNode(digit);
            ansTail->next = newNode;
            ansTail = newNode;
        }

        
        return ansHead;
    }
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *answer = add(l1, l2);
        return answer;
    }
};