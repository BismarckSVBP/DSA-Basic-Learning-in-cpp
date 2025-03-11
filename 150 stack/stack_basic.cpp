

// #include <iostream>
// #include <stack>
// using namespace std;

// int main()
// {

//     // creation
//     stack<int> st;

//     // insertion
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);

//     // removel
//     st.pop();

//     // check element on top
//     cout << "Element at top is : " << st.top() << endl;

//     // find size of the stack is
//     cout << "Size of stack is : " << st.size() << endl;

//     // check stack is empty or not
//     cout << "check stack is empty or not : " << st.empty() << endl;

//     // printing a stack
//     while (!st.empty())
//     {
//         cout << st.top() << " ";
//         st.pop();
//     }
//     cout << endl;

//     return 0;
// }







////leetcode
// class MinStack
// {
//     vector<pair<int, int>> st;

// public:
//     MinStack() {}

//     void push(int val)
//     {
//         if (st.empty())
//         {
//             pair<int, int> p = make_pair(val, val);

//             st.push_back(p);
//         }

//         else
//         {
//             pair<int, int> p;
//             p.first = val;
//             p.second = min(val, st.back().second);
//             st.push_back(p);
//         }
//     }

//     void pop()
//     {
//         st.pop_back();
//     }

//     int top()
//     {
//         return st.back().first;
//     }

//     int getMin()
//     {
//         return st.back().second;
//     }
// };

// /**
//  * Your MinStack object will be instantiated and called as such:
//  * MinStack* obj = new MinStack();
//  * obj->push(val);
//  * obj->pop();
//  * int param_3 = obj->top();
//  * int param_4 = obj->getMin();
//  */