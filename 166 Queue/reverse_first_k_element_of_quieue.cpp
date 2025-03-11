// by using recursion firstly we reverse the k element & store it in the last of the queue then after we rotate the size-k time the queue

// without using stack with using see bhavya

#include <iostream>
#include <queue>
using namespace std;

// reverse using recursion
void reverse(queue<int> &a, int &k, int &i)
{
    if (i == k)
    {
        return;
    }
    int x = a.front();

    a.pop();
    i = i + 1;
    reverse(a, k, i);
    a.push(x);
    return;
}
void rotate(queue<int> &a, int &k, int &j)
{
    if (j == a.size() - k)
    {
        return;
    }
    int x = a.front();
    a.pop();
    a.push(x);
    j = j + 1;
    rotate(a, k, j);
}
int main()
{
    queue<int> a;
    a.push(10);
    a.push(20);
    a.push(30);
    a.push(40);
    a.push(50);
    a.push(60);
    a.push(70);

    int k = 3;
    int i = 0;
    // reverse using recursion
    reverse(a, k, i);
    int j = 0;
    rotate(a, k, j);
    while (!a.empty())
    {
        cout << a.front() << " ";
        a.pop();
    }
    return 0;
}
