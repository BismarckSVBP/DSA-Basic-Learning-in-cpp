
// current element ke najdiki next konsa chota element hai yadi hai toh us element ko store karlo nahi toh -1 store karlo

// current element ke najdiki next konsa chota element hai yadi hai toh us element ko store karlo nahi toh -1 store karlo

#include <iostream>
#include <stack>
#include <vector>
#include <algorithm> // For reverse()
using namespace std;
vector<int> array;
vector<int> findNextSmaller(stack<int> st, int arr[], int size)
{
    st.push(-1);
    for (int i = size - 1; i >= 0; i--)
    {

        while (arr[i] < st.top())
        {

            st.pop();
        }
        array.push_back(st.top());
        st.push(arr[i]);
    }
    return array;
}

int main()
{
    int arr[] = {2, 1, 4, 3};
    int size = sizeof(arr) / sizeof(int);
    stack<int> st;
    vector<int> array;
    vector<int> ans = findNextSmaller(st, arr, size);

    cout << "Original Array is: ";
    for (auto val : ans)
    {
        cout << val << " ";
    }

    reverse(ans.begin(), ans.end());
    cout << "\nNext Smaller Elements: ";
    for (auto val : ans)
    {
        cout << val << " ";
    }

    return 0;
}

// har element par do operation perform ho rahe hai
// ek baar jab woh stack main insert ho raha hai toh push
// and jab woh kisi dusre element dwara pop ho raha hai