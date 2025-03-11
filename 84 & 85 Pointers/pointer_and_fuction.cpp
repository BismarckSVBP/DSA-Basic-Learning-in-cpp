// note -> if array is fully empty then garbage value will be inside it but if any of the element value exits then it all emnpty values will be intialises by zero

#include <iostream>
using namespace std;
void solve(int *p)
{
    *p = *p + 10;
    cout << "In function the value is: " << *p << endl;
    cout << "In the the solve function address of a : " << p << endl;
    cout << "address of solve function's pointer : " << &p << endl;
}
int main()
{

    int a = 5;
    int *b = &a;
    cout << "before calling the function the value is : " << *b << endl;
    cout << "address of a in main function : " << &a << endl;
    cout << "address of a in main function : " << b << endl;
    cout << "address of main function's pointer : " << &b << endl;
    solve(b);
    cout << "after calling the function the value is : " << *b << endl;
    return 0;
}
