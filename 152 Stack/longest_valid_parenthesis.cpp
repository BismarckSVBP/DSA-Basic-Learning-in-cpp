

#include <iostream>
#include <stack>
#include <vector>
using namespace std;
void checkLength(stack<int> &st, string str, vector<int> &arr, int i)
{

    if (i >= str.length())
    {
        return;
    }
    if (str[i] == '(')
    {
        st.push(i);
    }
    else
    {
        st.pop();
        if (!st.empty())
        {
            int length = i - st.top();
            arr.push_back(length);
        }
        else
        {
            st.push(i);
        }
    }
    checkLength(st, str, arr, i + 1);
}

int main()
{
    string str = "))((((()))))()))))((((((((((()))))))))))";
    stack<int> st;
    vector<int> arr;
    st.push(-1);
    int i = 0;
    checkLength(st, str, arr, i);

    int maxlength = arr[arr.size() - 1];
    cout << maxlength << endl;
    return 0;
}

// leetcode

// class Solution
// {
// public:
//     int longestValidParentheses(string s)
//     {

//         int maxLength = 0;
//         stack<int> st;

//         st.push(-1);
//         for (int i = 0; i < s.length(); i++)
//         {
//             if (s[i] == '(')
//             {
//                 st.push(i);
//             }
//             else
//             {
//                 st.pop();
//                 if (!st.empty())
//                 {
//                     int length = i - st.top();
//                     maxLength = max(maxLength, length);
//                 }
//                 else
//                 {
//                     st.push(i);
//                 }
//             }
//         }
//         return maxLength;
//     }
// };