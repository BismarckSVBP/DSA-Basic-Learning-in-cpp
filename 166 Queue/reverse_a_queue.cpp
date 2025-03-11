

#include <iostream>
#include <queue>
#include <stack>
using namespace std;
// reverse using stack
void reverse1(queue<int> &b)
{
    stack<int> st;
    while (!b.empty())
    {
        st.push(b.front());
        b.pop();
    }
    while (!st.empty())
    {
        b.push(st.top());
        st.pop();
    }
}
// reverse using recursion
void reverse(queue<int> &a)
{
    if (a.empty())
    {
        return;
    }
    int x = a.front();

    a.pop();

    reverse(a);
    a.push(x);
    return;
}
int main()
{
    queue<int> a;
    a.push(10);
    a.push(20);
    a.push(30);
    a.push(40);
    a.push(50);
    a.push(60);
    a.push(70);

    // reverse using recursion
    reverse(a);
    // reverse using stack
    reverse1(a);
    while (!a.empty())
    {
        cout << a.front() << " ";
        a.pop();
    }
    return 0;
}
