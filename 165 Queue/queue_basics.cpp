

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    queue<int> p;
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(9);
    q.push(7);
    q.push(2);
    q.push(1);
    p = q;//deep copy is defined in stl

    cout << " The size of queue is : " << q.size() << endl;
    q.pop();
    cout << " The size of queue is : " << q.size() << endl;
    cout << "Accessing the front element : " << q.front() << endl;
    cout << "Accessing the rear element : " << q.back() << endl;
    if (q.empty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }
    cout << "The elements of Queue q are : " << " ";
    while (q.empty() != 1)
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    cout << "The elements of Queue p are : " << " ";
    while (p.empty() != 1)
    {
        cout << p.front() << " ";
        p.pop();
    }
    return 0;
}
