

#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr; // points the stack storage which stored in heap
    int top1; // index of top1 element
    int top2;
    int size; // size of array
public:
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    // functions

    void push_back1(int data)
    {
        if (top2 - top1 > 1)
        {
            // space available

            // insert
            top1++;
            arr[top1] = data;
        }
        else
        {
            // space not available
            cout << "Stack-1 Overflow" << endl;
        }
    }

    // remove elements
    void pop1()
    {
        if (top1 == -1)
        {
            // // stack is empty
            cout << "Stack-1 Underflow , can not delete element " << endl;
        }
        else
        {
            // stack is not empty
            top1--;
        }
    }

    int getTOP1()
    {
        if (top1 == -1)
        {
            cout << "Stack-1 is empty" << endl;
        }
        else
        {
            return arr[top1];
        }
    }
    // return no. of valid element in the stack-array
    int getSize1()
    {
        return top1 + 1;
    }

    bool isempty1()
    {
        if (top1 == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void push_back2(int data)
    {
        if (top2 - top1 > 1)
        {
            // space available

            // insert
            top2--;
            arr[top2] = data;
        }
        else
        {
            // space not available
            cout << "Stack-2 Overflow" << endl;
        }
    }

    // remove elements
    void pop2()
    {
        if (top2 == size)
        {
            // // stack is empty
            cout << "Stack-2 Underflow , can not delete element " << endl;
        }
        else
        {
            // stack is not empty
            top2++;
        }
    }

    int getTOP2()
    {
        if (top2 == size)
        {
            cout << "Stack-2 is empty" << endl;
        }
        else
        {
            return arr[top2];
        }
    }
    // return no. of valid element in the stack-array
    int getSize2()
    {
        return size - top2;
    }

    bool isempty2()
    {
        if (top2 == size)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    Stack st(7);
    st.push_back1(1);
    st.push_back1(2);
    st.push_back1(3);
    st.push_back1(9);
    st.push_back1(38);
    st.push_back1(95);
    st.push_back1(63);

    // for accessing the top1 most element
    cout << st.getTOP1() << endl;

    // for accessing the size of the stack
    cout << st.getSize1() << endl;

    // for checking that empty set or not
    cout << st.isempty1() << endl;

    // accessing the element of the stack
    // while (!st.isempty1())
    // {
    //     cout << st.getTOP1() << " ";
    //     st.pop1();
    // }
    cout << endl;

    // for accessing the size of the stack
    cout << "Size of stack is - " << st.getSize1() << endl;

    st.pop1();

    st.push_back2(4);
    st.push_back2(5);
    st.push_back2(6);

    // for accessing the top1 most element
    cout << "topmost element : " << st.getTOP2() << endl;

    // for accessing the size of the stack
    cout << st.getSize2() << endl;

    // for checking that empty set or not
    cout << st.isempty2() << endl;

    // accessing the element of the stack
    while (!st.isempty2())
    {
        cout << st.getTOP2() << " ";
        st.pop2();
    }
    cout << endl;

    // for accessing the size of the stack
    cout << "Size of stack is - " << st.getSize1() << endl;

    st.pop2();
    return 0;
}
