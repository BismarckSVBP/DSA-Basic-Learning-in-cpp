
//function overloading compile time polymorphism

#include <iostream>
using namespace std;
class maths
{
public:
    int num;

    // here we change the signature of the sum function by changing the number of parameter or changing the type of data this is the decleaing same function through change the signature of function is as known function overloading

    // note -> we can not perform function overloading by the changing the return type
    int sum(int a, int b)
    {
        cout << "I am 1st sum function." << endl;
        cout << a + b << endl;
    }
    int sum(int a, int b, int c)
    {
        cout << "I am 2nd sum function." << endl;
        cout << a + b + c << endl;
    }
    int sum(int a, float b)
    {
        cout << "I am 3rd sum function." << endl;
        cout << a + b + 10 << endl;
    }
};
int main()
{
    maths ram;
    ram.sum(2, 3);
    ram.sum(2, 3, 4);
    ram.sum(2, 3.9f);
    return 0;
}