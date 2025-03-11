#include <iostream>
using namespace std;

class queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    // Constructor
    queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    // Destructor
    ~queue()
    {
        delete[] arr;
    }

    // Copy Constructor (Deep Copy)
    queue copy(queue &other)
    {
        size = other.size;
        arr = new int[size];
        front = other.front;
        rear = other.rear;
        for (int i = front; i < rear; i++)
        {
            arr[i] = other.arr[i];
        }
    }

    // Copy Assignment Operator (Deep Copy)
    queue &operator=(queue &other)
    {
        if (this == &other)
        {
            return *this;
        }
        // This condition checks if the object being assigned to (this) is the same as the object being assigned from (other). In simpler terms, it checks for self-assignment.
        // Why it’s important: If you were to assign an object to itself (e.g., q = q;), the assignment operation would proceed, which could lead to unexpected behavior or errors, such as deleting the array while it's still in use. The self-assignment check prevents this by simply returning the current object (*this) without performing any further operations.

        delete[] arr; // Before assigning new values, it's crucial to free the memory currently used by the object’s array (arr).
        // Why it’s important: If you don't delete the existing array, you risk a memory leak, where the old array is no longer accessible but its memory is still allocated. Deleting the existing array ensures that the old memory is freed before the new array is allocated and copied.

        size = other.size;
        arr = new int[size];
        front = other.front;
        rear = other.rear;
        for (int i = front; i < rear; i++)
        {
            arr[i] = other.arr[i];
        }

        return *this;
    }

    int getSize()
    {
        return rear - front;
    }

    void push(int data)
    {
        if (rear == size)
        {
            cout << "Queue is full." << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    void pop()
    {
        if (front == -1)
        {
            cout << "Queue is empty." << endl;
        }
        else if (front == 0 && rear == 1 || (front + size) == rear )
        {
            front = -1;
            rear = -1;
        }
        else if (front == size - 1)
        {

            arr[front] = -1;
            front = 0;
        }
        else
        {
            arr[front] = -1;
            front++;
        }
    }

    int getFront()
    {
        if (front == rear)
        {
            cout << "Queue is empty. ";
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    int back()
    {
        if (front == rear)
        {
            cout << "Queue is empty. ";
            return -1;
        }
        else
        {
            return arr[rear - 1];
        }
    }

    bool isEmpty()
    {
        return front == -1;
    }
};

int main()
{
    queue q(7);
    queue p(7);
    queue r(7);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(9);
    q.push(7);
    q.push(2);
    q.push(1);

    p.copy(q);

    // if we equal directly the queue variable then the shallow copy is created which changes on changing in the parent queue
    r = q; // Deep copy is performed

    cout << "The size of queue is: " << q.getSize() << endl;
    q.pop();
    cout << "The size of queue is: " << q.getSize() << endl;
    cout << "Accessing the front element: " << q.getFront() << endl;
    cout << "Accessing the rear element: " << q.back() << endl;

    if (q.isEmpty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }

    cout << "The elements of Queue q are: ";
    while (!q.isEmpty())
    {
        cout << q.getFront() << " ";
        q.pop();
    }
    cout << endl;

    cout << "The elements of Queue p are: ";
    while (!p.isEmpty())
    {
        cout << p.getFront() << " ";
        p.pop();
    }
    cout << endl;
    cout << "The elements of Queue r are: ";
    r.pop();
    while (!r.isEmpty())
    {
        cout << r.getFront() << " ";
        r.pop();
    }
    cout << endl;

    return 0;
}
