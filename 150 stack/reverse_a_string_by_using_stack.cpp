

//// Without using STL

// #include <iostream>
// using namespace std;

// class Stack
// {
// private:
//     char *arr; // points the stack storage which stored in heap
//     int top;  // index of top element
//     int size; // size of array
// public:
//     Stack(int size)
//     {
//         arr = new char[size];
//         this->size = size;
//         top = -1;
//     }

//     // functions

//     void push_back(char data)
//     {
//         if (size - top > 1)
//         {
//             // space available

//             // insert
//             top++;
//             arr[top] = data;
//         }
//         else
//         {
//             // space not available
//             cout << "Stack Overflow" << endl;
//         }
//     }

//     // remove elements
//     void pop()
//     {
//         if (top == -1)
//         {
//             // // stack is empty
//             cout << "Stack Underflow , can not delete element " << endl;
//         }
//         else
//         {
//             // stack is not empty
//             top--;
//         }
//     }

//     int getTOP()
//     {
//         if (top == -1)
//         {
//             cout << "Stack is empty" << endl;
//         }
//         else
//         {
//             return arr[top];
//         }
//     }
//     // return no. of valid element in the stack-array
//     int getSize()
//     {
//         return top + 1;
//     }

//     bool isempty()
//     {
//         if (top == -1)
//         {
//             return 1;
//         }
//         else
//         {
//             return 0;
//         }
//     }
// };

// int main()
// {
//     string str = "RAMESH";

//     Stack st(str.length());

//     for(int i=0;i<str.length();i++){
//         st.push_back(str[i]);
//     }

//     // // for accessing the top most element
//     // cout << st.getTOP() << endl;

//     // // for accessing the size of the stack
//     // cout << st.getSize() << endl;

//     // // for checking that empty set or not
//     // cout << st.isempty() << endl;

//     // accessing the element of the stack
//     while (!st.isempty())
//     {
//         cout << char(st.getTOP())<< " ";
//         st.pop();
//     }
//     cout << endl;

//     // // for accessing the size of the stack
//     // cout << "Size of stack is - " << st.getSize() << endl;

//     // st.pop();
//     return 0;
// }

// By using STL

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string str = "ABHAY";

    stack<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        st.push(str[i]);
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}
