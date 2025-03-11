
// by master
#include <iostream>
#include <stack>
using namespace std;
bool checkValidation(stack<char> &st, string str, int i)
{

    if (i == str.size())
    {

        return st.empty();
    }
    if ((str[i] == ')' || str[i] == ']' || str[i] == '}') && st.empty())
    {
        return false;
    }
    if (i == str.size() && st.empty())
    {
        return false;
    }
    if (str[i] == '(' || str[i] == '{' || str[i] == '[')

    {
        st.push(str[i]);
    }
    else
    {
        if (!st.empty())
        {
            char topCh = st.top();
            if (str[i] == ')' && topCh == '(')
            {

                st.pop();
            }
            else if (str[i] == '}' && topCh == '{')
            {
                st.pop();
            }
            else if (str[i] == ']' && topCh == '[')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }

    return checkValidation(st, str, i + 1);
}

int main()
{

    stack<char> st;

    string str = "[[[[[[[]]]]]]]";

    int i = 0;

    bool check = checkValidation(st, str, i);

    if (check == 1)
    {
        cout << "Valid Parenthesis." << endl;
    }
    else
    {
        cout << "Invalid Parenthesis." << endl;
    }

    return 0;
}

////by me submitted on Leetcode

// class Solution
// {
// public:
//     bool checkValidation(stack<char> &st, string str, int i)
//     {

//         if (i == str.size())
//         {

//             return st.empty();
//         }
//         if ((str[i] == ')' || str[i] == ']' || str[i] == '}') && st.empty())
//         {
//             return false;
//         }
//         if (i == str.size() && st.empty())
//         {
//             return false;
//         }
//         if (str[i] == '(' || str[i] == '{' || str[i] == '[')

//         {
//             st.push(str[i]);
//         }
//         if (str[i] == ')')
//         {
//             if (st.top() != '(')
//             {
//                 return false;
//             }
//             else
//             {
//                 st.pop();
//             }
//         }
//         if (str[i] == '}')
//         {
//             if (st.top() != '{')
//             {
//                 return false;
//             }
//             else
//             {
//                 st.pop();
//             }
//         }
//         if (str[i] == ']')
//         {
//             if (st.top() != '[')
//             {
//                 return false;
//             }
//             else
//             {
//                 st.pop();
//             }
//         }

//         return checkValidation(st, str, i + 1);
//     }

//     bool isValid(string s)
//     {
//         stack<char> st;
//         int i = 0;
//         bool check = checkValidation(st, s, i);
//         return check;
//     }
// };