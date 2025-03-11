#include <iostream>
using namespace std;
void utl(int *ptr)
{
    cout << "Inside the function :" << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    *ptr = *ptr + 1; // it will change the value because it changes the value which address is stored in the pointer
    ptr = ptr + 1;   // pass by value (p points the address of a which copied from passing the passing the pointer iin main function )
    *ptr = *ptr + 1; // it will not change because the pointer of function now changes the pointing location
    cout << ptr << endl;
    cout << &ptr << endl;
}
int main()
{

    int a = 5;
    int *p = &a;
    cout << "Before calling the function : " << endl;
    cout << a << endl;
    cout << &a << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;
    utl(p);
    cout << "after calling the function : " << endl;
    cout << a << endl;
    cout << &a << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;

    return 0;
}