
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void interleap(queue<int> &q, stack<int> &st1, stack<int> &st2)
{
    if (q.empty())
    {
        return;
    }
    int mid = 0;
    if (q.size() & 1 == 1)
    {
        mid = q.size() / 2 + 1;
    }
    else
    {
        mid = q.size() / 2;
    }
    int i = 0;
    while (i != mid)
    {
        int element1 = q.front();
        st1.push(element1);
        q.pop();
        i++;
    }

    while (!q.empty())
    {
        int element2 = q.front();
        st2.push(element2);
        q.pop();
    }
}
stack<int> reverseStack(stack<int> &s)
{

    stack<int> auxStack;

    while (!s.empty())
    {
        auxStack.push(s.top());
        s.pop();
    }
    return auxStack;
}
void fill(queue<int> &q, stack<int> &st1, stack<int> &st2)
{
    while ((!st1.empty()) && (!st2.empty()))
    {
        int element = st1.top();
        q.push(element);
        st1.pop();
        int element2 = st2.top();
        q.push(element2);
        st2.pop();
    }
    while (!st1.empty())
    {
        int element = st1.top();
        q.push(element);
        st1.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    stack<int> st1;
    stack<int> st2;

    interleap(q, st1, st2);

    st1 = reverseStack(st1);
    st2 = reverseStack(st2);

    fill(q, st1, st2);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
