

// current element ke najdiki next konsa chota element hai yadi hai toh us element ko store karlo nahi toh -1 store karlo

#include <iostream>
#include <stack>
#include <vector>
#include <algorithm> // For reverse()
using namespace std;
vector<int> arr2;
vector<int> findPreviousSmaller(stack<int> st, int arr[], int size)
{
    st.push(-1);
    for (int i = 0; i < size; i++)
    {

        while (arr[i] < st.top())
        {

            st.pop();
        }
        arr2.push_back(st.top());
        st.push(arr[i]);
    }
    return arr2;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 7, 5, 3, 1};
    int size = sizeof(arr) / sizeof(int);
    stack<int> st;
    vector<int> arr2;
    vector<int> ans = findPreviousSmaller(st, arr, size);

    cout << "Original Array is: ";
    for (auto val : ans)
    {
        cout << val << " ";
    }

    return 0;
}
