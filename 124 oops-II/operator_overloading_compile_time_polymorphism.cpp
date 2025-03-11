
// operator overloading compile time polymorphism

#include <iostream>
using namespace std;
class parameter
{
public:
    int val;

    void operator+(parameter &obj2)
    {
        int value1 = this->val;
        int value2 = obj2.val;
        cout << (value1 - value2) << endl;
    }
};
int main()
{
    parameter obj1, obj2;
    obj1.val = 10;
    obj2.val = 20;

    //this will print the difference of the values
    obj1 + obj2;

    return 0;
}