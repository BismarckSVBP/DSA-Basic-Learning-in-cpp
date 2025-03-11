

#include <iostream>
#include <stack>
using namespace std;

void insertAtbottom(stack<int> &st, int topElement)
{

    if (st.empty())
    {
        st.push(topElement);
        return;
    }

    int getTop = st.top();

    st.pop();

    insertAtbottom(st, topElement);

    st.push(getTop);
}

void reverseStack(stack<int> &st)
{
    // base case
    if (st.empty())
    {
        return;
    }

    // nahi pata
    int target = st.top();

    st.pop();

    // reverse stack
    reverseStack(st);

    // insert at bottom target ko
    insertAtbottom(st, target);
}

int main()
{

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(150);
    st.push(120);
    st.push(107);
    st.push(302);

    if (st.empty())
    {
        cout << "The stack is empty." << endl;
        return 0;
    }

    reverseStack(st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
