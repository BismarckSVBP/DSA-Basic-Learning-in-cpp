

#include <iostream>
#include <stack>
using namespace std;

void insertSorted(stack<int> &st, int target)
{
    if (st.empty())
    {
        st.push(target);

        return;
    }
    // base case
    if (st.top() >= target)
    {
        st.push(target);
        return;
    }

    // nahi pata
    int topElement = st.top();

    st.pop();

    // reverse stack
    insertSorted(st, target);

    st.push(topElement);
}

void sortAstack(stack<int> &st)
{

    if (st.empty())
    {
        return;
    }

    int topElement = st.top();

    st.pop();

    sortAstack(st);

    insertSorted(st, topElement);
    
}

int main()
{

    stack<int> st;

    st.push(410);
    st.push(20);
    st.push(230);
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

    sortAstack(st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
