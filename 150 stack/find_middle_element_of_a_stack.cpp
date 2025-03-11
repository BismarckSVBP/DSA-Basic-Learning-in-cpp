
#include <iostream>
#include <stack>
using namespace std;

int findMid(stack<int> &st, int size)
{
    if (st.size() == 0)
    {
        cout << "Their is no Element in stack." << endl;

        return -1;
    }
    if (((size / 2)) + 1 == st.size())
    {
        return st.top();
    }
    int temp = st.top();
    st.pop();
    int ans = findMid(st, size);
    st.push(temp);
    return ans;
}
int main()
{
    string str = "ABHAY";

    stack<int> st;

    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(4);
    // st.push(5);
    // st.push(6);
    // st.push(7);
    // st.push(8);
    int size = st.size();
    int ans = findMid(st, size);
    if (ans != -1)
    {
        cout << ans << endl;
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}
